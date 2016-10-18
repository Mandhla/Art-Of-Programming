/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Screen.h
 * Author: mandhla
 *
 * Created on October 6, 2016, 12:52 PM
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <string>

using namespace std;

class Screen {
public:
    void displayMessage(string) const; // output a message
    void displayMessageLine(string) const; // output message with newline
    void displayDollarAmount(double) const; // output a dollar amount
}; // end class Screen


#endif /* SCREEN_H */

