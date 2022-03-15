// Programmer: Will Weidler
// ID: wawq97
// Date: 3/14/22
// File: lab7.cpp
// Assignment: Lab 7
// Purpose: This program takes in 5 names and outputs the longest name.

#include "finding.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Please input the names of the 5 suspects." << endl;
    const int SIZE = 5;
    int i;
    string arrayInput;
    string arrayNames[5];
    for(i=0; i<SIZE; i++){
        cin >> arrayInput;
        arrayNames[i] = arrayInput;
    }
    cout << "The perpetrator was: " << arrayNames[findCriminal(arrayNames, SIZE)] << endl;
    return 0;
}