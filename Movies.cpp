#include "Movies.h"

Movies::Movies() {

}
Movies::~Movies() {

}
bool Movies::addMovie(Movie& m) {
	for (Movie movie in movies) {
		if (movie.getMovieName() == m.getMovieName()) {
			cout << "Movie already exists in the collection" << endl;
		}
		else {
			cout << "Movie added to the collection" << endl;
			movies.push_back(m);
		}
	}
	return true;
}

bool Movies::addMovie(string name, string rating, int watched) {
	Movie newMovie(name, rating, watched);
	for (Movie movie in movies) {
		if (movie.getMovieName() == newMovie.getMovieName()) {
			cout << "Movie already exists in the collection" << endl;
		}
		else {
			cout << "Movie " << name << " added to the collection" << endl;
			movies.push_back(newMovie);
		}
	}
	return true;
}

void Movies::displayMovies() {
	cout << "===============================" << endl;
	for (Movie movie in movies) {
		movie.displayMovie();
	}
	cout << "===============================" << endl;
}

bool Movies::incrementWatched(string name) {
	for (Movie movie in movies) {
		if (movie.getMovieName() == name) {
			movie.setMovieWatched((movie.getMovieWatched) + 1);
		}
		else {
			cout << name << " not found" << endl;
		}
	}
	return true;
}
