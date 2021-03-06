//
// Created on 7/10/2016.
//
#include <iostream>

using namespace std;

int ** createDynArray2d(const int rowNum, const int colNum) {
    int ** dynArr2d = new int * [rowNum];
    dynArr2d[0] = new int [rowNum * colNum];
    for (int i = 1; i < rowNum; i++) {
        dynArr2d[i] = dynArr2d[i - 1] + 4;
    }
    return dynArr2d;
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnusedValue"
void freeDynArray2d(int ** array) {
    delete[] array[0];
    delete[] array;
    array = 0;
}
#pragma clang diagnostic pop

void fillArray2d(int ** array, const int rowNum, const int colNum) {
    int counter = 1;
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            array[i][j] = counter++;
        }
    }
}

void printDynArray2d(int ** array, const int rowNum, const int colNum) {
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}
void printArray2d(int array[][3], const int rowNum, const int colNum) {
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    const int rowNum = 2;
    const int colNum = 3;
    int arr2d[rowNum][3] = {{1, 2, 3}, {4, 5, 6}};
    printArray2d(arr2d, rowNum, colNum);
    cout << endl;
    int ** dynArr2d = createDynArray2d(rowNum, colNum);
    fillArray2d(dynArr2d, rowNum, colNum);
    printDynArray2d(dynArr2d, rowNum, colNum);
    freeDynArray2d(dynArr2d);
    return 0;
};

