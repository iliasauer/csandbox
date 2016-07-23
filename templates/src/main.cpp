//
// Created on 7/10/2016.
//
#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    Array<int> * array = new Array<int>(100);
    delete array;
    return 0;
};

