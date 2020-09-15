#include <iostream>
#include "User.h"

int main() {

    set<string> set1;
    set1.insert("azione");
    set1.insert("splatter");

    Film film1("La Iene", 1992, "Tarantino", true, set1);

    set<string> set2;
    set2.insert("animazione");
    set2.insert("commedia");



    Film film1("Toy Story 4", 2019, "Josh Cooley", true, set2);



}
