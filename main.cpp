/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaleah Gonzalez
 */
 
#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main() {
  int i;

  cout<< "Enter a number: ";
  cin >> i;

  if(i % 2 == 0) {
    cout << i << "is even.";
  }
  else {
    cout << i << " is odd."; 
  }

  return 0;
} 
