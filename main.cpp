/*********
  main.cpp
  Main Template

  Created by Phillip Viau on 1/13/15.
  Copyright (c) 2015 Phillip Viau. All rights reserved.
************/

// Initialization Begin
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Initialization End



// Prototypes Begin
void mainUserInterface();
// Prototypes End

// Public Variables Begin



// Public Variables End

// main() function needed
int main(int argc, const char * argv[]) {
    srand(time(NULL)); // initializes random seed everytime function is executed
    mainUserInterface();
    
    cout << "Hello, World!\n";
    system("pause");
    return 0;
}



void mainUserInterface() {
    
    // string variables
    string options[3]{" Game 01\n"," Game 02\n"," Game 03\n"}; // User Interface Menu options
    string optionQuit = " Quit \nPlease select corresponding number. \n"; // Quit option for User Menu
    
    // int variables
    int n;
    int optionNum = 4;
    
    // char variables
    char userInput = 'q'; // Accepts user input for menu system
   
    for (n = 0; n>optionNum; n++ ){

        cout << options[n];

        
    }

    
    cout << n+1 << optionQuit;
    cin >> userInput;
    
    
    
}

int randomNumberGenerator(int num, int maxNum){
    maxNum = 100; // Random number from 1 to 100
    num = rand() % maxNum + 1; // Edit maxNum variable to define maximum number to be random
    return num; // returns variable to the function to allow it to be used outside of function
}
