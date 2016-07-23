//
// Created on 7/22/2016.
//

#include "D.h"

void D::testMethod() {
    B::privateActionToOverride();
    A::publicAction();
}
