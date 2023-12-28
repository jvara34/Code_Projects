/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   text-adventure.cpp
 * Author: jvara
 *
 * Created on December 21, 2023, 7:58 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * This is going to be a story text adventure :) 
 */
int main(int argc, char** argv) {

    int TT;
    int choice1; 
    int choice2; 
    int pin; 
    int tries = 0;
    
    
    cout << "This is a story about Tiny Tim and his Grand Adventure! \n\n\n";
    
    cout << "Tiny Tim wakes up one morning and his house blows up because a dragon below up his house!\n";
    
    cout << "You must choose to fight or run away from the dragon!\n";
    cout << "1) Fight\n";
    cout << "2) Run\n";
    
    cin >> choice1; 
    
    if(choice1 == 1){
        cout << "TT crawls up the dragon and kills the dragon! ";
    }
    else if(choice1 == 2){
        cout << "TT tries to run away but he gets smashed! \n\n\n";
        cout << "YOU LOST!";
        exit(0);
    }
    else{
        cout << "Invalid Input";
        exit(0);
    }
    
    cout << "After TT slays the dragon he finds a letter inside the dragon\n";
    cout << "Do you choose to read the letter?\n";
    cout << "1) Read Letter\n";
    cout << "2) Throw away letter\n";
    
    cin >> choice2; 
    
    if(choice2 == 1){
        cout << "The Letter reads \n\n\n";
        cout << "HELLO\n";
        cout << "You must find the Hoily Grail in order to kill all of the dragons everyone will DIE!!!\n";
    }
    else if(choice2 == 2){
        cout << "TT goes about his day and then he dies because the dragon comes back!\b";
        exit(0);
    }
    else{
        cout << "INVALID INPUT\n";
        exit(0);
    }
    
    cout << "TT then goes on adventure to Mount Everest to find the Hoily Grail\n";
    cout << "Once TT is on the bridge to the Mount Everest he meets the Billy goats and he has to give them a 4 digit pin!";
    cout << "TT only gets 3 tries to get the 4 digit pin \n";
    cin >> pin; 
    
    while(pin != 1234 && tries < 3){
        cout << "try again!\n";
        if(tries == 2){
            cout << "HINT: ABCD\n";
        }
        cin >> pin;
        tries++;
        
    }
    
    if(pin == 1234){
        
        cout << "The Billy goats lets you cross the bridge.\n";
        
    }
    else{
        
        cout << "You failed!\n\nThe Billy goats pushed you off the bridge!";
        exit(0);
    }
    
    cout << "Tiny Tim climbs Mount Everest and he find the Holy Grail and he saves his family WOOO!\n\nTHE END!";   

    
}

