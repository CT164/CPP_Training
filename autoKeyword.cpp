#include<iostream>
using namespace std;

auto sum(int a, int b) {
	return a + b;
}

int main(){

	//auto keyword used with variables
	auto weight = 50.6;
	auto age = 30;
	cout <<"Weight is "<<weight<<" kg and age is "<<age<<endl;

	//auto keyword used with functions 
	cout << sum(2, 4);
}
