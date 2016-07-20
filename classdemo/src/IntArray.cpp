//
// Created by ilya on 20.07.16.
//
#include <algorithm>
#include <iostream>
#include "IntArray.h"

IntArray::IntArray(int const size) : size_(size), data_(new int[size]) {
    for (int i = 0; i < size; i++) {
        data_[i] = 0;
    }
}

IntArray::IntArray(IntArray const &other) : size_(other.size_), data_(new int[other.size_]) {
    for (int i = 0; i < size_; i++) {
        data_[i] = other.data_[i];
    }
}

IntArray::~IntArray() {
    delete [] data_;
}

IntArray &IntArray::operator=(IntArray const &other) {
    if (this != &other) {
        IntArray(other).swap(*this);
    }
    return *this;
}

void IntArray::swap(IntArray &other) {
    std::swap(size_, other.size_);
    std::swap(data_, other.data_);
}

int IntArray::size() const {
    return size_;
}

int IntArray::get(const int i) const {
    return data_[i];
}

int &IntArray::get(const int i) {
    return data_[i];
}

void IntArray::resize(int nsize) {
    IntArray newArray(nsize);
    int n;
    if (size_ < nsize) {
        n = size_;
    } else {
        n = nsize;
    }
    for (int i = 0; i < n; i++) {
        newArray.data_[i] = data_[i];
    }
    swap(newArray);
}

void IntArray::print() {
    for (int i = 0; i < size_; i++) {
        std::cout << data_[i] << ' ';
    }
    std::cout << std::endl;
}















