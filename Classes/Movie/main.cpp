#include <iostream>
#include "Movies.cpp"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

int main() {

    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);                 
    add_movie(my_movies,"Star Wars", "PG",5);             
    add_movie(my_movies,"Cinderella", "PG",7);            
     
    my_movies.display();  
    
    add_movie(my_movies,"Cinderella", "PG",7);           
    add_movie(my_movies,"Ice Age", "PG",12);             

    my_movies.display();    
    
    increment_watched(my_movies,"Big");                   
    increment_watched(my_movies,"Ice Age");             
    
   my_movies.display();    
    
    increment_watched(my_movies,"XXX");

    return 0;
}

void increment_watched(Movies &movies, string name) {
    if(movies.increment_watched(name)) cout << "Watch incremented" << endl;
    else cout << "Not found, add it first." << endl;
}
 void add_movie(Movies &movies, string name, string rating, int watched) {
    if(movies.add_movie(name, rating, watched)) cout << "Movie added." << endl;
    else cout << "Movie already exists." << endl;
 }