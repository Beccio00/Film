//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_FILM_H
#define UNTITLED_FILM_H
#include <iostream>
#include <set>

using namespace std;

class Film {
public:
    Film(string& t, int y, string& d, bool iL, set<string> g) : title(t), year(y), director(d), isLoad(iL), genres(g) {};

    const string &getTitle() const {
        return title;
    }

    const set<string> &getGenres() const {
        return genres;
    }

private:
    string title;
    int year;
    string director;
    bool isLoad;
    set<string> genres;
};


#endif //UNTITLED_FILM_H
