//
// Created on 7/10/2016.
//
#include <iostream>
using namespace std;

int foo() {
    cout << "Hello" << endl;
    return 2;
}

int bar() {
    int * m[1];
    m[19] = (int *) &foo; // i don't know
    return 1;
}

int main() {
    bar();
    return 0;
};

