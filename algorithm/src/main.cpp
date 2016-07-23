//
// Created on 7/10/2016.
//
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> vector = {-8, 42, -78, -30, 32, 5, 11, 0};
    std::vector<std::pair<int, int>> pairVector;
    for (int i = 0; i < vector.size(); ++i) {
        pairVector.push_back({vector[i], i});
    }
    sort(pairVector.begin(), pairVector.end());
    for (auto x: pairVector) {
        std::cout << x.second << ' ';
    }
    std::cout << std::endl;
    return 0;
};

