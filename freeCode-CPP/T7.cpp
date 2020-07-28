
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //int age;
    string name;

    // cout << "Enter your age : ";

    cout << "Enter your name : ";

    cin >> age;             // For number and character

    getline(cin, name) ;   // For string

    // cout << "you are " << age << "  years old" << endl;

    cout << "Hello" << name;

    return 0;

}