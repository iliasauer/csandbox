//
// Created on 7/22/2016.
//

#ifndef ROOTPROJECT_A_H
#define ROOTPROJECT_A_H


class A {
private:
    virtual void privateActionToOverride();
protected:
    virtual void protectedAction();
public:
    virtual void publicAction();
};


#endif //ROOTPROJECT_A_H
