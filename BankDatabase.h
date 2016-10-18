/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BankDatabase.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 1:05 PM
 */

#ifndef BANKDATABASE_H
#define BANKDATABASE_H

#include <vector> // class uses vector to store Account objects
using namespace std;
#include "Account.h" // Account class definition

class BankDatabase {
public:
    BankDatabase(); // constructor initializes accounts
    // determine whether account number and PIN match those of an Account
    bool authenticateUser(int, int); // returns true if Account authentic
    double getAvailableBalance(int); // get an available balance
    double getTotalBalance(int); // get an Account's total balance
    void credit(int, double); // add amount to Account balance
    void debit(int, double); // subtract amount from Account balance
private:
    vector< Account > accounts; // vector of the bank's Accounts
    // private utility function
    Account * getAccount(int); // get pointer to Account object
}; // end class BankDatabase

#endif /* BANKDATABASE_H */

