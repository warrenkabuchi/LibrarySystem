//
// Created by kabuc on 4/7/2022.
//

#ifndef LIBRARYSYSTEM_LOAN_H
#define LIBRARYSYSTEM_LOAN_H


class Loan {
    public:
    Loan();//default constructor
    Loan(int loan_id, int loan_isbn, bool loan_status );//constructor with arguments
    void setId(int loan_id);//loan identifier
    void setIsbn(int loan_isbn);//book identifier
    void setStatus( bool loan_status);//paid or not paid
    int getId();
    int getIsbn();
    bool getStatus();


    private:
    int id;
    int loan_amount
    int isbn;
    bool current_status;
};


#endif //LIBRARYSYSTEM_LOAN_H
