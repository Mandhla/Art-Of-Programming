/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 1:03 PM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(int, int, double, double); // constructor sets attributes
    bool validatePIN(int) const; // is user-specified PIN correct?
    double getAvailableBalance() const; // returns available balance
    double getTotalBalance() const; // returns total balance
    void credit(double); // adds an amount to the Account balance
    void debit(double); // subtracts an amount from the Account balance
    int getAccountNumber() const; // returns account number
private:
    int accountNumber; // account number
    int pin; // PIN for authentication
    double availableBalance; // funds available for withdrawal
    double totalBalance; // funds available + funds waiting to clear
}; // end class Account

#endif /* ACCOUNT_H */

