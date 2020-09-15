//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_FILM_H
#define UNTITLED_FILM_H
#include <iostream>
#include <list>

using namespace std;

class Film {
public:
    Film(string& t, int y, string& d, bool iL, list<string> g) : title(t), year(y), director(d), isLoad(iL), genres(g) {};

private:
    string title;
    int year;
    string director;
    bool isLoad;
    list<string> genres;
};


#endif //UNTITLED_FILM_H
