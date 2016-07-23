//
// Created on 7/10/2016.
//
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>


int main() {
    std::vector<int> vector;
    for (int i = 1; i <= 100; ++i) {
        vector.push_back(i);
    }
    for (auto x: vector) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    std::set<int> set;
    for (int i = 0; i < 5; ++i) {
        set.insert(i);
    }
    std::cout << (set.find(2) != set.end()) << std::endl;
    set.erase(2);
    std::cout << (set.find(2) != set.end()) << std::endl;
    for (auto x: set) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    std::map<int, std::string> map;
    int key = 112;
    map[key] = "sos";
    if (map.find(key) != map.end()) {
        std::cout << map[key] << std::endl;
    }
    for (auto pair: map) {
        std::cout << pair.first << '=' << pair.second << std::endl;
    }
    return 0;
};

