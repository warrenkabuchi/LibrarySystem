//
// Created by kabuc on 4/7/2022.
//

#ifndef LIBRARYSYSTEM_BOOK_CLASS_H
#define LIBRARYSYSTEM_BOOK_CLASS_H




class Book{
    Book();//default constructor
    Book(string author, string title, int isbn,int library_id,int cost,bool status);//constructor with arguments
public:
    void set_author(string book_author); //mutator funtion
    void set_title(string book_title);//mutator function
    void set_id( int book_id);
    void set_isbn(int book_isbn);//mutator function
    void set_cost(int book_cost);//mutator function
    void set_status( bool book_status);//mutator function
    void print_info();

    string get_author();//accessor function
    string get_title();
    string get_isbn();//accessor function
    string get_id();
    string get_cost();//accessor function
    string get_status();//accessor function
private:
    string author; //Set books authors name
    string title;
    int isbn; //books identification number
    int library_id;//customers library id
    double cost;
    string status; //status checked out or not?

};





#endif //LIBRARYSYSTEM_BOOK_CLASS_H
