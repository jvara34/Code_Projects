/* 
 * File:   whaletalk.cpp
 * Author: Julian Vara
 *
 * Created on December 22, 2023, 12:16 PM
 */


#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * This Program will translate any phrase into whale language 
 */
int main(){
    string phrase = "Diss arm hurts"; 
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    
    for(int i = 0; i < phrase.size(); i++){
        for(int j = 0; j < vowels.size(); j++){
            if(phrase[i] == vowels[j]){
                result.push_back(phrase[i]);
            }
        }
        if(phrase[i] == 'u'){
            result.push_back('u');
        }
        else if(phrase[i] == 'e'){
            result.push_back('e');
        }
    }
    for(int k = 0; k < result.size(); k++){
        
        cout << result[k];
        
    }
    
    
}

