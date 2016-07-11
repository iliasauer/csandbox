//
// Created on 7/10/2016.
//
#include <iostream>

using namespace std;

int maxElement(int * p, int * q) {
    int max = *p;
    for (; p != q; p++) {
        if (*p > max) {
            max = *p;
        }
    }
    return max;
}

int * maxElementP(int * p, int * q) {
    int * maxP = p;
    for (; p != q; p++) {
        if (*p > *maxP) {
            maxP = p;
        }
    }
    return maxP;
}

bool maxElement(int * p, int * q, int * res) {
    if (p == q) {
        return false;
    }
    *res = *p;
    for (; p != q; p++) {
        if (*p > *res) {
            *res = *p;
        }
    }
    return true;
}

bool maxElementP(int * p, int * q, int ** res) {
    if (p == q) {
        return false;
    }
    *res = p;
    for (; p != q; p++) {
        if (*p > **res) {
            *res = p;
        }
    }
    return true;
}

int main() {
    int arrLen = 10;
    int arr[arrLen] = {8, 5, 7, 78, 64, 12, 64, 4, 11, 3};
    int max = maxElement(arr, arr + arrLen);
    cout << "max = " << max << endl;
    int * maxP = maxElementP(arr, arr + arrLen);
    cout << "max = " << *maxP << endl;
    max = 0;
    bool doesMaxExist = maxElement(arr, arr + arrLen, &max);
    if (doesMaxExist) {
        cout << "max = " << max << endl;
    } else {
        cout << "max does not exist " << endl;
    }
    maxP = 0;
    doesMaxExist = maxElementP(arr, arr + arrLen, &maxP);
    if (doesMaxExist) {
        cout << "max = " << *maxP << endl;
    } else {
        cout << "max does not exist " << endl;
    }
    return 0;
};

