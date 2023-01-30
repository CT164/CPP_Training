/*Assignment 5
Design a calculator for integer valuesImplement a calculator that will handle addition, subtraction, multiplication and division operations 
for both signed and unsigned integers.
*/

#include<iostream>
using namespace std;

int main(){
	int number1,number2;
	char op;
	
	cout<<"Enter number 1 ";
	cin>>number1;
	cout<<"Enter the operator ";
	cin>>op;
	cout<<"Enter number 2 ";
	cin>>number2;
	
	
	switch(op){
		case '+':
			cout<<number1 + number2;
			break;
			
		case '-':
			cout<<number1 - number2;
			break;
			
		case '*':
			cout<<number1*number2;
			break;
			
		case '/':
			cout<<number1/number2;
			break;
	}
	
	
}
