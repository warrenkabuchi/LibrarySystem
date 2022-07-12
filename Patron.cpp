//
// Created by kabuc on 4/7/2022.
//

#include "Patron.h"
void Patron::setName( string patron_name) {
    name= patron_name;
}
void Patron::setId(int patron_id) {
    id = patron_id;
}
void Patron::setBalance(double patron_balance) {
    balance= patron_balance;
}
void Patron::setBooksOut(int patron_books_out) {
    num_books_out= patron_books_out;
}

//setters
string Patron::getName( string patron_name){
    return patron_name;
}
int Patron::getId(int patron_id){
    return patron_id;
}
int Patron::getBalance(double patron_balance) {
    return patron_balance}
int Patron::getBooksOut(int patron_books_out) {
    return patron_books_out;
}