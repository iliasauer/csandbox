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

    virtual void swap(IntArray &other);
public:
    explicit IntArray(int const size);
    IntArray(IntArray const& other);

    virtual IntArray &operator=(IntArray const &other);

    virtual ~IntArray();

    virtual int size() const;
    virtual int get(int i const) const;
    virtual int & get(int i const);
    virtual void resize(int nsize);
};


#endif //ROOTPROJECT_INTARRAY_H
