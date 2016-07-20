//
// Created by ilya on 20.07.16.
//

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



