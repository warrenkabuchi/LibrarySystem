#ifndef LIBRARYSYSTEM_BOOKS_H
#define LIBRARYSYSTEM_BOOKS_H
#include "books.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
class Books{
    vector<Book> books;
    Books();
    void addBook();
    void editBook();
    void deleteBook();
    void searchBook();
    void printList();
    void printOneBook();


};
