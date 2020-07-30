
#include <iostream>

using namespace std;


class Movie{

	private:
		string rating;

	public:
		string title;
		string director;

		
		// constructor

		Movie(string aTitle, string aDirector, string aRating){

			title = aTitle;
			director = aDirector;
			setRating(aRating);


		}



		// setter

		void setRating(string aRating){

			if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "AR" ){

				rating = aRating;

			} else{

			rating = "NR";

			}


		}

		// getter

		
		string getRating() {

			return rating;


		}


};



int main()
{


	Movie avengers("The Avengers", "Joss Whedon", "PG-13");

	avengers.setRating("PG-14");

	cout << avengers.getRating() << endl;


	return 0;


}
