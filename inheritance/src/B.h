//
// Created on 7/22/2016.
//

#ifndef ROOTPROJECT_B_H
#define ROOTPROJECT_B_H


#include "A.h"

class B : A {
private:
    virtual void privateAction();
    void publicAction();
public:
    void privateActionToOverride();
};


#endif //ROOTPROJECT_B_H
