//Find square root of a number and handle invalid inputs using exception handelind 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int number,result;
	cout<<"Enter a number : ";
	cin>>number;
	try{
		if(number<0){
			throw number;
		}
		cout<<sqrt(number);
	}
	catch(int number){
		cout<<"Exception : Square root of negative number is not possible";
	}
}
