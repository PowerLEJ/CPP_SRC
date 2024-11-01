#ifndef EXP_H
#define EXP_H

class Exp {
public:

    int exp;
    int base;

    Exp();
    Exp(int b);
    Exp(int b, int e);

    int getValue(void);
    int getBase(void);
    int getExp(void);

    bool equals(Exp b);
};

#endif