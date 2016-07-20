//
// Created by ilya on 20.07.16.
//

#ifndef ROOTPROJECT_INTARRAY_H
#define ROOTPROJECT_INTARRAY_H


#include <cstddef>

class IntArray {
private:
    int size_;
    int *  data_;
public:
    explicit IntArray(int const size);
    IntArray(IntArray const& other);
};


#endif //ROOTPROJECT_INTARRAY_H
