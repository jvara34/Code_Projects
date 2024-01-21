#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ttt_functions.hpp"

using namespace std; 
vector<char> board{'0', '1', '2', '3', '4', '5', '6', '7', '8'}; 
bool winner = false;
bool filled = false; 
int counter = 0; 
int player = 1;

string user1;
string user2;


void greet(){
    
    cout << "Hello players this a game of Tic-Tac-Toe\n";
    cout << "*****************************\n";
    cout << "Each player will press the number they want their thing placed.\n";
    cout << "Good Luck to each player. :)";
    cout << "\nPlayer 1 what will your name be? ";
    cin >> user1; 
    cout << "Player 2 what will your name be? ";
    cin >> user2;
    cout << "**************************\n";
    cout << "\nHello " << user1 << " and " << user2 << "\n\n";
    cout << "**************************\n";
    
    
}

bool board_filled(){
    
    if(counter >= 9){
        filled = true; 
    }
    
    
    return filled;
}



void change_player(){
    
    if(player == 1){
        user1_turn();
        player++;
    }
    else{
        user2_turn();
        player--;
    }
    
}

void user2_turn(){
    
    char input; 
    
    cout << "Please enter a number " << user2 << ": ";
    cin >> input; 
    
    cout << "\n";
     
        
       if(input == '0' && input != 'x'){
           replace(board.begin(), board.end(), '0', 'o');
       }
       if(input == '1' && input != 'x'){
          replace(board.begin(), board.end(), '1', 'o');
       }
       if(input == '2' && input != 'x'){
           replace(board.begin(), board.end(), '2', 'o');
       }
       if(input == '3' && input != 'x'){
           replace(board.begin(), board.end(), '3', 'o');
       }
       if(input == '4' && input != 'x'){
           replace(board.begin(), board.end(), '4', 'o');
       }
       if(input == '5' && input != 'x'){
           replace(board.begin(), board.end(), '5', 'o');
       }
       if(input == '6' && input != 'x'){
           replace(board.begin(), board.end(), '6', 'o');
       }
       if(input == '7' && input != 'x'){
          replace(board.begin(), board.end(), '7', 'o');
       }
       if(input == '8' && input != 'x'){
           replace(board.begin(), board.end(), '8', 'o');
       }
       
       
}

void user1_turn(){
    
    char input; 

    
    cout << "Please enter a number " << user1 << ": ";
    cin >> input;
    cout << "\n";
   
    if(input == '0' && input != 'o'){
       replace(board.begin(), board.end(), '0', 'x');
    }
   
    if(input == '1' && input != 'o'){
        replace(board.begin(), board.end(), '1', 'x');
    }
   
    if(input == '2' && input != 'o'){
        replace(board.begin(), board.end(), '2', 'x');
    }
   
    if(input == '3' && input != 'o'){
       replace(board.begin(), board.end(), '3', 'x');
    }
   
    if(input == '4' && input != 'o'){
       replace(board.begin(), board.end(), '4', 'x');
    }
    if(input == '5' && input != 'o'){
       replace(board.begin(), board.end(), '5', 'x');
    }
    if(input == '6' && input != 'o'){
        replace(board.begin(), board.end(), '6', 'x');
    }
    if(input == '7' && input != 'o'){
        replace(board.begin(), board.end(), '7', 'x');
    }
    if(input == '8' && input != 'o'){
        replace(board.begin(), board.end(), '8', 'x');
    }
    

    
}

void drawboard(){
    
   
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "---|---|---\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    cout << "\n\n";
}


bool checkwinner(){
    //check horizontal  wins for 'x' 
    if(board[0] == 'x' && board[1] == 'x' && board[2] == 'x'){
          cout << user1 << " you beat " << user2 << "\n";
        winner = true; 
       
    }
    if(board[3] == 'x' && board[4] == 'x' && board[5] == 'x'){
        cout << user1 << " you beat " << user2 << "\n";
        winner = true; 
        
    }
    if(board[6] == 'x' && board[7] == 'x' && board[8] == 'x'){
        cout << user1 << " you beat " << user2 << "\n";
        winner = true; 
        
    }
    //check horizontal wins for 'o' 
    if(board[0] == 'o' && board[1] == 'o' && board[2] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
        
    }
    if(board[3] == 'o' && board[4] == 'o' && board[5] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
       
    }
    if(board[6] == 'o' && board[7] == 'o' && board[8] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
       
    }
    
    //check vertical wins for 'x' 
    if(board[0] == 'x' && board[3] == 'x' && board[6] == 'x'){
        winner = true; 
        cout << user1 << " you beat " << user2 << "\n";
    }
    if(board[1] == 'x' && board[4] == 'x' && board[7] == 'x'){
        winner = true; 
        cout << user1 << " you beat " << user2 << "\n";
    }
    if(board[2] == 'x' && board[5] == 'x' && board[8] == 'x'){
        winner = true; 
       cout << user1 << " you beat " << user2 << "\n";
    }
    
    //check vertical wins for 'o'
    if(board[0] == 'o' && board[3] == 'o' && board[6] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
        
    }
    if(board[1] == 'o' && board[4] == 'o' && board[7] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
       
    }
    if(board[2] == 'o' && board[5] == 'o' && board[8] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true; 
     
    }
    
    //diagonally for 'x'
    if(board[0] == 'x' && board[4] == 'x' && board[8] == 'x'){
        winner = true; 
        cout << user1 << " you beat " << user2 << "\n";
        
    } 
    if(board[2] == 'x' && board[4] == 'x' && board[6] == 'x'){
        winner = true; 
        cout << user1 << " you beat " << user2 << "\n";
        
    }
    
    //diagonally for 'o'
    if(board[0] == 'o' && board[4] == 'o' && board[8] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true;  
        
    }
    if(board[2] == 'o' && board[4] == 'o' && board[6] == 'o'){
        cout << user2 << " you beat " << user1 << "\n";
        winner = true;  
       
    }
    
    return winner; 
   
}
    


void tic_tac_toe(){
    
    drawboard();
    
    while(checkwinner() == false && board_filled() == false){
 
        change_player();
        counter++;
        drawboard();
     
        
    }
    end_game();
    
      
}



void end_game(){
    
    if(winner == true){
        
        cout << "You are the better player Good Job!" << endl;
        
    }
    else if(board_filled()){
        
        cout << "CAT GAME!" << endl;
       
        
    }
 

}

