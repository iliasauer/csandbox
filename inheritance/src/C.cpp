//
// Created on 7/22/2016.
//

#include "C.h"

void C::privateAction() {
    B::privateActionToOverride();
    A::publicAction();
}
