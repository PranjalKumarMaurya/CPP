#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>

using namespace std;

class Movie {
    private:
       string name;
       string rating;
       int watched;
    public:
       Movie(string n, string r, int w) : name(n), rating(r), watched(w) {}
       Movie(const Movie &source) :Movie{source.name, source.rating, source.watched} {}
       ~Movie() {}

       void set_name(string name) {(*this).name = name;}
       string get_name() {return name;}

       void set_rating(string rating) {(*this).rating = rating;}
       string get_rating(){return rating;}

       void set_watched(int watched) {(*this).watched = watched;}
       int get_watched() {return watched;}

       void increment_watched() {++watched;}

       void display() const {cout << name << ", " << rating << ", " << watched << endl;}
};

#endif