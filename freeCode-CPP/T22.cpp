
#include <iostream>

using namespace std;



int main()
{

	int age = 19;
	double gpa = 2.7;
	string name = "Mike";

	int *pAge = &age;
	double *pGpa = &gpa;
	string *pName = &name;


	cout << "Age: " << &age << endl;    // This is a pointer i.e. memory address
	cout << "Gpa: " << &gpa << endl;
	cout << "Name: " << &name << endl;


	cout << pAge << endl;
	cout << *pAge << endl;

	cout << *&gpa << endl;


	return 0;

}
