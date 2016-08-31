//
//  main.cpp
//  Book Exercise 3.18
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book Exercise 3.18 - Addition of 3 Numbers Quiz
//

#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main() {
    // Title
    cout << "Addition Quiz - 3 Numbers \n";
    
    // D
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int answer = 0;
    
    // P
    // Generate two random digits
    srand(time(0)); // rand seed
    number1 = rand() % 100;
    number2 = rand() % 100;
    number3 = rand() % 100;
    
    // O
    cout << "What is " << number1 << " + " << number2 << " + " << number3 << "? ";
    cin >> answer;
    
    if (number1 + number2 + number3 == answer) {
        cout << "Weeee've got a winner! You are correct!" << endl;
    } else {
        cout << "You're wrong and should feel bad. " << number1 << " + " << number2 << " + " << number3 << " should be " << (number1 + number2 + number3) << ". Even babies know that." << endl;
    }
    
    return 0;
    
}
