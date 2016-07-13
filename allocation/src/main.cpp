//
// Created on 7/10/2016.
//
#include <iostream>

using namespace std;

int main() {
    int * i = new int(5);
    delete(i);
    i = new int[1000];
    delete [] i;
    return 0;
};

