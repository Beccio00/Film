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
