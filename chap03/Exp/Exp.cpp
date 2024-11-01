// #include <cmath>
#include "Exp.h"

Exp::Exp() {
    exp = 1;
    base = 1;
}
Exp::Exp(int b) {
    exp = 1;
    base = b;
}
Exp::Exp(int b, int e) {
    exp = e;
    base = b;
}

int Exp::getValue(void) {
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
    // return pow(base, exp);
}
int Exp::getBase(void) {
    return base;
}
int Exp::getExp(void) {
    return exp;
}

bool Exp::equals(Exp b) {
    if (this->getValue() == b.getValue()) {
        return true;
    } else {
        return false;
    }
}