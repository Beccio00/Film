//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "Library.h"

void Library::addFilm(Film *f) {
    library.push_back(f);
}

bool Library::searchTitle(string& t) {
    for(auto it : library){
        if(it->getTitle() == t)
            return true;
    }

    return false;
}


bool Library::searchGenres(string& g) {
    for(auto it : library){
        auto itr = it->getGenres().find(g);
        if(itr != it->getGenres().end())
            return true;
    }
    return false;
}

void Library::removeFilm(string& n) {
    for(auto it : library) {
        if (it->getTitle() == n)
            library.remove(it);
    }
}


