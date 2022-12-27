#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,inter,pay;
	cout << "Enter initial loan: "; cin>>loan;
	cout << "Enter interest rate per year (%): ";cin>>inter;
	cout << "Enter amount you can pay per year: ";cin>>pay;
	int year=1;
	double bal=loan,interest,total,new_bal;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << bal;
		interest=bal*(inter/100);
		cout << setw(13) << left << interest;
		total=bal+interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << ((total>pay)?pay:total);
		new_bal=total-((total>pay)?pay:total);
		cout << setw(13) << left << new_bal;
		cout << "\n";	
		bal=new_bal;
		year++;
	}while (bal>0);
	return 0;
}
