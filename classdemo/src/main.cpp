//
// Created on 7/10/2016.
//
#include <iostream>
#include "IntArray.h"

using namespace std;

int main() {
    IntArray array(10);
    int counter = 0;
    for (int i = 0; i < array.size(); i++) {
        array.get(i) = ++counter;
    }
    array.print();
    return 0;
};

