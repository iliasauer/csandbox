//
// Created on 7/10/2016.
//
#include <cstdlib>

using namespace std;

int main() {
    size_t intSize = sizeof(int);
    int * array = (int *) malloc(1000 * intSize);
    array = (int *) realloc(array, 2000 * intSize);
    free(array);
    array = (int *) calloc(3000, intSize);
    free(array);
    array = 0;
    return 0;
};

