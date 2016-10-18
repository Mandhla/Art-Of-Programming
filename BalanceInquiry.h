/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BalanceInquiry.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 1:13 PM
 */

#ifndef BALANCEINQUIRY_H
#define BALANCEINQUIRY_H

#include "Transaction.h" // Transaction class definition

class BalanceInquiry : public Transaction {
public:
    BalanceInquiry(int, Screen &, BankDatabase &); // constructor
    virtual void execute(); // perform the transaction
}; // end class BalanceInquiry

#endif /* BALANCEINQUIRY_H */

