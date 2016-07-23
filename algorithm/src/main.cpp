//
// Created on 7/10/2016.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vector = {1, 100, 43, 0, -12, 82, 45, 3};
    sort(vector.begin(), vector.end());
    for (auto x: vector) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    return 0;
};

