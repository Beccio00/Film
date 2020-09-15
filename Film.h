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
    Film(string t, int y, string d, bool iL, set<string> g, bool inL = false) : title(t), year(y), director(d), isLoad(iL), genres(g), inLibrary(inL) {};

    const string &getTitle() const {
        return title;
    }

    const set<string> &getGenres() const {
        return genres;
    }

    bool isInLibrary() const {
        return inLibrary;
    }

    bool isLoad1() const {
        return isLoad;
    }

    void setInLibrary(bool inLibrary) {
       this->inLibrary = inLibrary;
    }

private:
    string title;
    int year;
    string director;
    bool isLoad;
    set<string> genres;
    bool inLibrary;
};


#endif //UNTITLED_FILM_H
