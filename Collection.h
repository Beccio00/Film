//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_COLLECTION_H
#define UNTITLED_COLLECTION_H
#include "Film.h"

class Collection {
    Collection(string& n, set<Film*> c) : name(n), collection(c) {};

    void addFilm(Film* f);

    void removeFilm(string& n);

    void printLoader();

    void printGenres(string& g);


private:
    string name;
    set<Film*> collection;

};


#endif //UNTITLED_COLLECTION_H
