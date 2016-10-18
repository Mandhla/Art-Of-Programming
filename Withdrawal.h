/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Withdrawal.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 12:37 PM
 */

#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h" // Transaction class definition

//class Screen; // forward declaration of class Screen
class Keypad; // forward declaration of class Keypad
class CashDispenser; // forward declaration of class CashDispenser
//class BankDatabase; // forward declaration of class BankDatabase

/*class Withdrawal {
    // attributes
    int accountNumber; // account to withdraw funds from
    double amount; // amount to withdraw
    // references to associated objects
    Screen &screen; // reference to ATM’s screen
    Keypad &keypad; // reference to ATM's keypad
    CashDispenser &cashDispenser; // reference to ATM's cash dispenser
    BankDatabase &bankDatabase; // reference to the account info database
public:
    // operations
    void execute(); // perform the transaction
}; // end class Withdrawal

// class Withdrawal derives from base class Transaction
*/
class Withdrawal : public Transaction {
    // attributes
    int amount; // amount to withdraw
    Keypad &keypad; // reference to ATM's keypad
    CashDispenser &cashDispenser; // reference to ATM's cash dispenser
    int displayMenuOfAmounts() const; // display withdrawal menu
public:
    Withdrawal( int, Screen &, BankDatabase &, Keypad &, CashDispenser & );
    // member function overriding execute in base class Transaction
    virtual void execute(); // perform the transaction
}; // end class Withdrawal
#endif /* WITHDRAWAL_H */

