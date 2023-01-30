#include<iostream>
#include<cassert>
using namespace std;

bool isPrime(int number){
	for(int i=2;i<number;i++){
		if(number%i==0) return false;
	}
	return true;
}

int main(){
	assert(isPrime(2) == true);
	assert(isPrime(3) == true);
	assert(isPrime(4) == false);
	assert(isPrime(5) == true);
	assert(isPrime(27) == false);
	assert(isPrime(29) == true);
	assert(isPrime(42) == false);
	assert(isPrime(100) == false);
	assert(isPrime(105) == false);
	
	cout<<"All tests passed. "<<endl;
}
