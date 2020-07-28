
#include <iostream>

using namespace std;

int main()
{

    string phrase = "google.com \n";
    cout << phrase;

    cout << "Angela Merkel"<< endl;
    cout << "Hallo" << endl;

    cout << phrase.length() << endl;

    cout << phrase[2] << endl;           // indexing

    phrase[0] = 'D';
    
    cout << phrase << endl;

    cout << phrase.find("gle") << endl;

    cout << phrase.substr(7,3);

    return 0;
}