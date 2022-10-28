#pragma once
#include <vector>
#include <string>
using namespace std;

class Movies
{
private:
	vector<Movie> movies;

public:
	Movies();
	~Movies();
	bool addMovie(const Movie& m);
	bool addMovie(string name, string rating, int watched);
	bool incrementWatched(string name);
	void displayMovies() const;
};
