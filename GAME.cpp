#include<iostream>
#include<string>
using namespace std;

class Student {
public:
	string name;
	string city;
	int age;


	void getinput() {
		cout << "ENTER YOUR NAME:";
		getline(cin, name);
		cout << "ENTER YOUR CITY NAME:";
		getline(cin, city);
		cout << "ENTER YOUR AGE:";
		cin >> age;
		cout << endl;

	}
	

};

int main() {

	cout<<"Bilal Iqbal"<<endl;
	Student s1;
	s1.getinput();
	s1.print();

}
