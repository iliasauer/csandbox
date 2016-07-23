//
// Created on 7/23/2016.
//

#ifndef ROOTPROJECT_SCOPEDPOINTER_H
#define ROOTPROJECT_SCOPEDPOINTER_H


#include "Expression.h"

class ScopedPointer {
private:
    Expression *ptr_;

    ScopedPointer(const ScopedPointer&);
    ScopedPointer &operator=(const ScopedPointer&);
public:
    explicit ScopedPointer(Expression *ptr = 0);
    ~ScopedPointer();
    Expression* get() const;
    Expression* release();
    void reset(Expression *ptr = 0);
    Expression& operator*() const;
    Expression* operator->() const;
};


#endif //ROOTPROJECT_SCOPEDPOINTER_H
