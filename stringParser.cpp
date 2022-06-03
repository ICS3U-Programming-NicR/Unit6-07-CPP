// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:June 2022
// This program calculates the average

#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <cctype>
#include <algorithm>
#include <iomanip>
#include <cstring>


using std::cin;
using std::cout;
using std::stof;
using std::stoi;
using std::string;

void stringParser(string sentence) {
    string word = "";
    for (auto x : sentence) 
    {
        if (x == ' ')
        {
            cout << word << "\n";
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << "\n";
}


int main() {
    bool infiniteLoop = true;
    do {
        string garbage;
        string uString;
        cout  << "Enter the sentence you would like to parse: ";
        getline(cin, uString);
        stringParser(uString);
        cout << "\nIf you would like to parse a sentence again just press <enter>: ";
        if (cin.get() == '\n') {
            continue;
        } else if (cin.get() != '\n') {
            cin >> garbage;
            continue;
        }
    } while (infiniteLoop);
}
