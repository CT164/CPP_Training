#include<iostream>
using namespace std;

//To return reference to the calling object
class Student {
	int rollNo;

public:
	Student & setData(int rollNo) {
		this->rollNo = rollNo;
		return *this;
	}

	void getData() {
		cout << rollNo << endl;
	}
};

int main() {
	Student S1;

	S1.setData(4);
	S1.getData();
}