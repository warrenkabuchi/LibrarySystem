//
// Created by kabuc on 4/7/2022.
//
#include <iostream>
#include <string>
using namespace std;

Book::Book(){
    author = " ";
    title ="";
    isbn = 0;
    library_id = 0;
    cost =0;
    status = " ";
}

Book::Book(string author, string title, int isbn,int library_id,int cost,bool status)//constructor with arguments
{
    this->author = author; //assigning values using parameterised constructor
    this->title = title;
    this->isbn = isbn;
    this->library_id= library_id;
    this ->cost = cost;
    this ->status = status;
}

//Book methods
void Book::set_author (string book_author){
    author = book_author;
}
void Book::set_title(string book_title) {
    title = book_title;
}
void Book::set_id(int book_id){
    library_id= book_id;
}
void Book::set_isbn(int book_isbn) {
    isbn= book_isbn;
}
void Book::set_id(int library_id){
    book_id= library id;
}
void Book::set_cost(int book_cost) {
    cost=book_cost;
}
void Book::set_status(bool book_status) {
    status = book_status;
}
void Book::print_info(){
    cout<<"Author is "<<author<<endl;
    cout<<"Title is "<<title<<endl;
    cout<<"Isbn is "<<isbn<<endl;
    cout<<"Library ID is "<<library_id<<endl;
    cout<<"Cost is "<<cost<<endl;
    cout<<"Status is "<<status<<endl;
}
//
string Book::get_author(){
    return author;
}
string Book::get_title(){
    return title;
}
int Book::get_isbn(){
    return isbn;
}
int Book::get_id(){
    return library_id;
}
int Book::get_cost(){
    return cost;
}
string Book::get_status(){
    return status;
}
