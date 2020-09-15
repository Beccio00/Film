//
// Created by Riccardo Becciolini on 15/09/20.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include "Collection.h"

class User {
public:
    User() = default;
    User(set<Collection*> c) : collections(c){};

    void addCollection(Collection* c);

    void removeCollection(Collection* c);

private:
    string name;
    set<Collection*> collections;


};


#endif //UNTITLED_USER_H
