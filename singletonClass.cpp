#include<iostream>
using namespace std;

class Singleton {

private:
	string name, loves;
	Singleton() {}  //make constructor private
	static Singleton* instancePtr;


public:
	Singleton(Singleton& obj) = delete;
	static Singleton* getInstnace() {
		if (instancePtr == NULL) {
			instancePtr = new Singleton();
			return instancePtr;
		}

		else {
			return instancePtr;
		}
	}

	void setData(string name, string loves) {
		this->name = name;
		this->loves = loves;
	}

	void getData() {
		cout << name << " loves " << loves << "." << endl;
	}
};

Singleton* Singleton::instancePtr = NULL;

int main() {
	Singleton* object = Singleton::getInstnace();
	object->setData("A", "Tea");
	object->getData();
	cout << "Address of object is " << object << endl;

	Singleton* object2 = Singleton::getInstnace();
	object2->setData("B", "Coffee");
	object2->getData();
	cout << "Address of object2 is " << object2 << endl;
}
