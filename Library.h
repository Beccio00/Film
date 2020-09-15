//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H

#include "Film.h"
#include <list>

class Library {
public:
    Library() = default;

    explicit Library(list<Film*> l): library(l){};

    bool searchTitle(string& t);
    bool searchGenres(string& g);

    void addFilm(Film* f);

    void removeFilm(string& n);





private:
    list<Film*> library;

};


#endif //UNTITLED_LIBRARY_H
