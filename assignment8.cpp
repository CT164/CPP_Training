/*Assignment 7
Convert a float number (32 bits) into 4 bytes and vice versa. */

#include<iostream>
using namespace std;

class simpleInterest{
	float principleAmount;
	float rateOfInterest;
	float time;
	
	public:
	simpleInterest(){
		cout<<"Enter principle amount ";
		cin>>principleAmount;
		
		cout<<"Enter rate of interest ";
		cin>>rateOfInterest;
			
		cout<<"Enter time ";
		cin>>time;
	}
	void display(){
        cout << (principleAmount*rateOfInterest*time)/100;
    }
};
int main(){
	simpleInterest i;
	i.display();
}
