/*Assignment 6Extend the Integer calculator to also support Floating point operations. (Duration –2hrs)*/

#include<iostream>
using namespace std;

int main(){
	float number1,number2;
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
