#include<iostream>
using namespace std;

//When local variable’s name is same as member’s name

class Student {
	int rollNo;

public:
	void setData(int rollNo) {
		this->rollNo = rollNo;
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