#include<iostream>
#include<string>
using namespace std;

class Vehicle{
	protected :
		int numberOfWheels;
		int maxSpeed;
		
	public :
		Vehicle(int n,int maxs){
			numberOfWheels = n;
			maxSpeed = maxs;
		}
		
		virtual void display() = 0;
};

class twoWheeler : public Vehicle{
	string typeOfVehicle;
	
	public:
	twoWheeler(int n,int maxs, string type):Vehicle(n,maxs){
		typeOfVehicle = type;
	}
	
	void display(){
		cout<<"Number of wheels "<<numberOfWheels<<endl;
		cout<<"Maximum speed "<<maxSpeed<<endl;
		cout<<"It is a "<<typeOfVehicle<<endl;
	}
};

class fourWheeler: public Vehicle{
	string typeOfVehicle;
	string typeOfEngine;
	
	public:
	fourWheeler(int n,int maxs,string type,string engine):Vehicle(n,maxs){
		typeOfVehicle = type;
		typeOfEngine = engine;
	}
	
	void display(){
		cout<<"Number of wheels "<<numberOfWheels<<endl;
		cout<<"Maximum speed "<<maxSpeed<<endl;
		cout<<"It is a "<<typeOfVehicle<<endl;
		cout<<"Type of engine "<<typeOfEngine<<endl;
	}
};

int main(){
	int no,speed; 
	string TWtype, FWtype, engineType;
	
	
	no = 2;
	speed = 60;
	TWtype = "sports bike";
	twoWheeler activa(no,speed,TWtype);

	no = 4;
	speed = 100;
	FWtype = "passanger vehicle";
	engineType = "SI";
	fourWheeler bus(no,speed,FWtype,engineType);

	Vehicle* v1;
	Vehicle* v2;
	v1 = &activa;
	v2 = &bus;
	
	v1 -> display();
	
	cout<<endl<<endl;
	
	v2 -> display();

}
