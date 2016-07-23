//
// Created on 7/23/2016.
//

#include "ScopedPointer.h"

ScopedPointer::ScopedPointer(Expression *ptr) {
    this->ptr_ = ptr;
}

ScopedPointer::~ScopedPointer() {
    delete ptr_;
}

Expression *ScopedPointer::get() const {
    return this->ptr_;
}

Expression *ScopedPointer::release() {
    Expression* tmp = this->ptr_;
    this->ptr_ = 0;
    return tmp;
}

void ScopedPointer::reset(Expression *ptr) {
    delete ptr_;
    this->ptr_ = ptr;
}

Expression &ScopedPointer::operator*() const {
    return *(this->ptr_);
}

Expression *ScopedPointer::operator->() const {
    return this->ptr_;
}

ScopedPointer::ScopedPointer(const ScopedPointer &pointer) {}

ScopedPointer &ScopedPointer::operator=(const ScopedPointer &pointer) {}
