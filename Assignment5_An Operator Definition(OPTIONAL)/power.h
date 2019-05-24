//
// Created by wmd on 2019/5/20.
//

#ifndef UNTITLE_POWER_H
#define UNTITLE_POWER_H


class X {
    public:
        unsigned value;
        explicit X(unsigned);
        X(X&);
        X();
        X& operator*();
        friend long long operator*(unsigned, X);
        X& operator=(unsigned);
};


#endif //UNTITLE_POWER_H
