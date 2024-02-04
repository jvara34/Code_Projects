/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   rockpaperscissors.cpp
 * Author: jvara
 *
 * Created on December 20, 2023, 10:03 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand (time(NULL));

  int computer = rand() % 3 + 1; 

  int user = 0; 

  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";

  cout << "1) rock\n";
  cout << "2) paper\n";
  cout << "3) scissors\n";

  cout << "shoot!\n";

  cin >> user; 

  if(computer == user){
    cout << "Computer did the same move!\n";
    cout << "tie\n";
  }
  else if(computer == 1 && user == 2){
    cout << "Computer: Rock\n";
    cout << "User Wins\n";
  }
  else if(computer == 1 && user == 3){
    cout << "Computer: Rock\n";
    cout << "User Loses\n";
  }
  else if(computer == 2 && user == 1){
    cout << "Comptuer: Paper\n";
    cout << "User Loses\n";
  }
  else if(computer == 2 && user == 3){
    cout << "Computer: Paper\n";
    cout << "User Wins\n";
  }
  else if(computer == 3 && user == 1){
    cout << "Computer: Scissors\n";
    cout << "User Wins\n";
  }
  else if(computer == 3 && user == 2){
    cout << "Computer: Scissors\n";
    cout << "User Loses\n";
  }
  
  
    
}

