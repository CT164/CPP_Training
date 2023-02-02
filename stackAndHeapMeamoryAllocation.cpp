#include<iostream>
using namespace std;

int main() {
	//stack memory allocation
	int value = 2;
	int arr[100];


	//heap memory allocation
	int* ptr = new int;
	*ptr = 100;
	delete ptr;
	//deallocation in heap memory
	int* arr1 = new int[10];
	delete[] arr1;
}