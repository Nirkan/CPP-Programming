
#include <iostream>

using namespace std;


void sayHi(string name, int age);


int main()
{

	cout << "Top" << endl;	
	
	sayHi("Niraj", 28);

	sayHi("Tom", 27);

	sayHi("sebastian", 29);

	cout << "Down" << endl;

	return 0;
}



void sayHi(string name, int age){

	cout << "Hello " << name << ", you are " << age << endl;

}

