
#include <iostream>

using namespace std;



class Book {

	public:
		string title;
		string author;
		int pages;


};



int main()
{


	Book book1;
	book1.title = "Lord of the rings";
	book1.author = "J.R.R. Tolkein";
	book1.pages = 700;

	Book book2;
	book2.title = "Harry Potter";
	book2.author = "J.K. Rowling";
	book2.pages =  500;

	cout << book1.title << endl;
	cout << book1.pages << endl;

	cout << book2.author << endl;


	return 0;

}
