#include "Movie.h"
#include <iostream>

Movie::Movie(string name, string rating, int watched) 
	: name{ name }, rating{ rating }, watched{ watched } {

}

Movie::Movie(const Movie& source)
	: Movie{ source.name, source.rating, source.watched } {

}

Movie::~Movie() {

}

void Movie::displayMovie() {
	cout << name << ", " << rating << ", " << watched << endl;
}
