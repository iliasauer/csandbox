//
// Created on 7/10/2016.
//
#include <iostream>

using namespace std;

int main() {
    const int rowNum = 2;
    const int colNum = 3;
    int arr2d[rowNum][colNum] = { {1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            cout << arr2d[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
};

