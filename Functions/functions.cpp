#include <iostream> 
#include <cmath> 
#include <vector> 


using namespace std; 

//This function will give the mulptiles of 3
vector<int> multi_of_three(int num){

	vector<int> multi{num, num * 2, num * 3};
	return multi;

}

int main(){

	for(int element : multi_of_three(9)){
	
		cout << element << "\n"; 
	}


}


