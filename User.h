//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include "Collection.h"

class User {
public:
    User(string& n, set<Collection*> c) : name(n), collections(c){};

    void printCollectionsLoaded();
    void printCollentiosGenres(string& g);

    void addCollection(Collection* c);

    void removeCollection(Collection* c);

private:
    string name;
    set<Collection*> collections;


};


#endif //UNTITLED_USER_H
