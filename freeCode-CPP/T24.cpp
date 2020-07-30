
#include <iostream>

using namespace std;



class Book {

	public:
		string title;
		string author;
		int pages;


		Book() {

			title = "no title";
			author = "no author";
			pages = 0;


		}
		

		Book(string aTitle, string aAuthor, int aPages){                       // constructor
		
			title = aTitle;
			author = aAuthor;
			pages = aPages;


		}


};



int main()
{


	Book book1("Lord of the rings", "Tolkein", 700);
	
	Book book2("Harry Potter", "J.K. Rowling", 500);

	Book book3;


	cout << book1.title << endl;
	cout << book1.pages << endl;

	cout << book3.author << endl;


	return 0;

}
