/* 
 * File:   ufo.cpp
 * Author: Julian Vara
 *
 * Created on December 31, 2023, 7:46 AM
 */

#include <iostream>
#include <string>
#include <vector>
#include "ufo_functions.hpp"

using namespace std;

/*
 * This is going to be a game about a UFO abductions humans but the game is going
 * to be played like "hangman" style. 
 */
int main() {

    string codeword = "codecademy";
    string answer = "__________";
    int misses = 0;
    bool guess = false; 
    char letter;
    vector<char> incorrect; 
    
    
    greet();
    
    while(answer != codeword && misses < 7){
        
        display_misses(misses); 
        display_status(incorrect, answer);
        cout << "Please enter a one letter guess: ";
        cin >> letter;
        for(int i = 0; i < codeword.length(); i++){
            if(letter == codeword[i]){
                answer[i] = letter;
                guess = true; 
            }
            
        }
        if(guess == true){
            cout << "Correct!\n";
        }
        else{
            cout << "Incorrect! the Tractor beam pulls the person in further.";
            incorrect.push_back(letter);
             misses ++;
        }
        
        guess = false;
        
       
    }
    end_game(answer, codeword);
    
}

