/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CashDispenser.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 12:57 PM
 */

#ifndef CASHDISPENSER_H
#define CASHDISPENSER_H

class CashDispenser {
public:
    CashDispenser(); // constructor initializes bill count to 500
    // simulates dispensing of specified amount of cash
    void dispenseCash(int);
    // indicates whether cash dispenser can dispense desired amount
    bool isSufficientCashAvailable(int) const;
private:
    static const int INITIAL_COUNT = 500;
    int count; // number of $20 bills remaining
}; // end class CashDispenser

#endif /* CASHDISPENSER_H */

