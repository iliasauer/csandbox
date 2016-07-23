//
// Created on 7/23/2016.
//

#ifndef ROOTPROJECT_ARRAY_H
#define ROOTPROJECT_ARRAY_H

#include <stddef.h>

template <class T>
class Array {
private:
    T * data_;
    size_t size_;
public:
    explicit Array(size_t size) : data_(new T[size]), size_(size) {}
    virtual ~Array() {
        delete [] data_;
    }
    virtual size_t size() const {
        return size_;
    }

    virtual T operator[](size_t index) const {
        return data_[index];
    }

    virtual T &operator[](size_t index){
        return data_[index];
    }
};


#endif //ROOTPROJECT_ARRAY_H
