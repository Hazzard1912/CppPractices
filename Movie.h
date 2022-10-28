#pragma once
#include <string>
using namespace std;

class Movie
{
private:
	string name;
	string rating;
	int watched;

public:
	Movie(string name, string rating, int watched);
	Movie(const Movie& source);
	~Movie();
	void getMovieName() const { return name; }
	void getMovieRating() const { return rating; }
	void getMovieWatched() const { return watched; }
	void setMovieName(string name) { this->name = name; }
	void setMovieRating(string rating) {this->rating = rating; }
	void setMovieWatched(int watched) { this->watched = watched; }
	void displayMovie() const;
};
