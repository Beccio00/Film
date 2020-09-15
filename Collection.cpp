//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "Collection.h"

void Collection::addFilm(Film *f) {
    collection.insert(f);
}

void Collection::removeFilm(string& n) {
    for(auto it : collection){
        if(it->getTitle() == n)
            collection.erase(it);
    }
}

void Collection::printLoader() {
    for(auto it : collection) {
        if(it->isLoad1())
            cout << it->getTitle() << endl;
    }
}

void Collection::printGenres(string &g) {
    for(auto it : collection){
        for(auto itr : it->getGenres()){
            if(itr == g)
                cout << itr << endl;
        }

    }
}