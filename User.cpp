//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "User.h"

void User::addCollection(Collection *c) {
    collections.insert(c);
}

void User::removeCollection(Collection *c) {
    collections.erase(c);
}

void User::printCollectionsLoaded() {
    for(auto it : collections)
        it->printLoader();

}

void User::printCollentiosGenres(string &g) {
    for(auto it : collections )
        it->printGenres(g);
}
