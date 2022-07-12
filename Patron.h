//
// Created by kabuc on 4/7/2022.
//

#ifndef LIBRARYSYSTEM_PATRON_H
#define LIBRARYSYSTEM_PATRON_H


class Patron {
    public:
    Patron();
    Patron(string patron_name,int patron_id, int patron_id,int patron_books_out);
    void setName(string patron_name);
    void setId(int patron_id);
    void setBalance(double patron_balance);
    void setBooksOut(int patron_books_out);
    string getName();
    int getId();
    double getBalance();
    int getBooksOut();

    private:
    string name;
    int id;
    float balance;
    int num_books_out;
};





#endif //LIBRARYSYSTEM_PATRON_H
