//
// Created by kabuc on 4/7/2022.
//

#include "Loan.h"


//setters
void Loan::setId(int loan_id) {
    id = loan_id;
}
void Loan::setIsbn(int loan_isbn) {
    isbn = loan_isbn;
}
void Loan::setStatus(bool loan_status){
    status= loan_status;
}

//getters
int Loan::getStatus(loan_status) {
    return loan_status;
}
int Loan::getIsbn(loan_isbn){
    return loan_isbn;
}
bool Loan::getStatus(bool loan_status){
    return loan_status;
}
