// Given a list of integers find closest to zero     if there is tie choose positive value

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	int nearestValue = arr[0];
	for(int i=0;i<5;i++){
		if(abs(arr[i]<nearestValue)){
			nearestValue = arr[i];
		}
	}
	
	cout<<abs(nearestValue);
}
