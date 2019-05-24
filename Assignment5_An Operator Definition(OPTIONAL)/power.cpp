//
// Created by wmd on 2019/5/20.
//

#include "power.h"
X::X(unsigned t) {
    value=t;
}

X::X(X &p) {
    value=p.value;
}

X::X() {
    value=0;
}

X& X::operator*() {
    return *this;
}

long long operator*(unsigned t, X p) {
    long long out=1;
    for(int i=0;i<p.value;i++){
        out*=t;
    }
    return out;
}

X& X::operator=(unsigned t) {
    value=t;
    return *this;
}
