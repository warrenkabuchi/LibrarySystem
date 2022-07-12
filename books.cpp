//
// Created by kabuc on 4/21/2022.
//
#ifndef LIBRARYSYSTEM_BOOKS_H
#define LIBRARYSYSTEM_BOOKS_H
#include "books.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
void Book::addBook(){
    string author; //Set books authors name
    string title;
    int isbn; //books identification number
    int library_id;//customers library id
    double cost;
    string status; //status checked out or not?

    //get user data and store it in variable
    cout<<"Enter the authors name: "<<endl;
    getline(cin,author);
    cout<<"Enter the books title: "<<endl;
    getline(cin,title);
    cout<<"Enter the books ISBN: "<<endl;
    cin>>isbn;
    cout<<"Enter the library id"<<endl;//not sure i need this
    cin>>library_id;
    cout<<"Enter the Books Cost: "<<endl;
    cin>>cost;
    cout<<"Enter the books status: "<<endl;
    cin>>status;
    Book p(author, title, isbn, library_id, cost, status);// creating an object p to
    books.push_back(p);// adding books to the vector
};

void editBook(){
    string author; //Set books authors name
    string title;
    int isbn; //books identification number
    int library_id;//customers library id
    double cost;
    string status; //status checked out or not?
    string toEdit;
    cout<<"Enter the books ISBN:"<<endl;
    cin>>isbn;

    cout<<"What book attribute would you like to edit?"<<endl;


}


#endif //LIBRARYSYSTEM_BOOKS_H
