#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int row,int col){
	if(!(col<1||row<1))
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++)
				cout<<"O";
			cout<<endl;
		}
	else	cout<<"Invalid input";
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
