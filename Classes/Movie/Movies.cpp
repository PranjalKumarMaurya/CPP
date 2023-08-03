#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.cpp"
#include <iostream>

using namespace std;

class Movies {
    private :
       vector<Movie> movies;
    public: 
       Movies(){};
       ~Movies(){};

       bool add_movie(string name, string rating, int watched) {
         for(Movie &movie: movies) {
            if(movie.get_name() == name) return false;
         }
         Movie temp {name, rating, watched};
         movies.push_back(temp);
         return true; 
       }

       bool increment_watched(string name) {
         for(Movie &movie : movies) {
            if(movie.get_name() == name) movie.increment_watched();
            return true;
         }
         return false;
       }

       void display() const {
         if(movies.size() == 0) cout << "Sorry, no movies to display." << endl;
         else {
            for(auto movie: movies) movie.display();
         }
       }
};

#endif