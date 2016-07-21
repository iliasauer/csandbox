//
// Created on 7/10/2016.
//
#include <cstring>
#include <iostream>

using namespace std;

void println(size_t content);
void println(const char *const content);

int main() {
    char chunk1[] = "Hello";
    size_t stringLength = strlen(chunk1);
    println(stringLength);
    char chunk2[] = ", World!";
    char * greeting1 = strcat(chunk1, chunk2);
    println(greeting1);
    char greeting2[6] = {72, 101, 108, 108, 111};
    if (strcmp(chunk1, greeting2) == 0) {
        println("chunk1 == greeting2");
    }
    return 0;
};

void println(size_t content) {
    cout << content << endl;
}

void println(const char *const content) {
    cout << content << endl;
}
void println(char * content) {
    cout << content << endl;
}

