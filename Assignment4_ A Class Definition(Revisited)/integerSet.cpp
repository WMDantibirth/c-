//
// Created by wmd on 2019/5/5.
//

#include "integerSet.h"
#include <iostream>
using namespace std;

integerSet::integerSet(){
    elements = new int[1000];
    ability = 1000;
    used = 0;
}

integerSet::integerSet(int r){
    bad_integerSet bi;
    if(r<1){
        bi.errnum=1;
        throw bi;
    }
    elements = new int[r];
    ability = r;
    used = 0;
}

integerSet::integerSet(const integerSet& p) {
    elements=new int[p.capacity()];
    used=p.size();
    ability=p.capacity();
    for(int i=0;i<p.size();i++){
        elements[i]=p.element()[i];
    }
}

int* integerSet::element() const {
    return elements;
}

int integerSet::size()const {
    return used;
}

int integerSet::capacity()const {
    return ability;
}

bool integerSet::isMember(int r){
    if(used==0)return false;
    for(int i=0;i<used;i++){
        if(elements[i]==r){
            return true;
        }
    }
    return false;
}

void integerSet::insert(int i){
    if(used>=ability){
        bad_integerSet bi;
        bi.errnum=2;
        throw bi;
    }
    else if(!isMember(i)) {
        elements[used] = i;
        used++;
    }
}

bool integerSet::isEmpty(){
    return used == 0;
}

void integerSet::erase(int i){
    if(isMember(i)) {
        for (int j = 0; j < used; j++) {
            if (elements[j] == i) {
                for (int p = j; p < used - 1; p++) {
                    elements[p] = elements[p + 1];
                }
                used--;
                break;
            }
        }
    }
}

void integerSet::clear(){
    used=0;
}

bool integerSet::isSubset(integerSet& p){
    if(p.size() > used) return false;
    if(p.size()==0)return true;
    else{
        for(int i=0;i<p.size();i++){
            for(int j=0;j<used;j++){
                if(elements[j]==p.element()[i]) break;
                else if(j==used-1||elements[j]!=p.element()[i]) return false;
            }
        }
        return true;
    }
}

integerSet integerSet::setdifference(integerSet p) {
    integerSet out(ability);
    for(int i=0;i<used;i++){
        if(!p.isMember(elements[i])){
            out.insert(elements[i]);
        }
    }
    return out;
}

integerSet integerSet::setsymmetricdifference(integerSet p) {
    integerSet r1{p.setdifference(*this)};
    integerSet r2{(*this).setdifference(p)};
    return r1.setunion(r2);
}

integerSet integerSet::setunion(integerSet p) {
    integerSet out(ability+p.capacity());
    for(int i=0;i<used;i++)out.insert(elements[i]);
    for(int j=0;j<p.size();j++){
        if(!isMember(p.element()[j])){
            out.insert(p.element()[j]);
        }
    }
    return out;
}

integerSet integerSet::setintsection(integerSet t) {
    integerSet ans(ability+t.capacity());
    for(int i=0; i<used; i++){
        int flag=0;
        for(int j=0; j<t.size(); j++)
            if(elements[i]==t.element()[j]){
                flag=1;
                break;
            }
        if(flag)ans.insert(elements[i]);
    }
    return ans;
}

/*下面是运算符重载*/

int integerSet::operator()() {
    return used;
}

integerSet integerSet::operator|(integerSet p) {
    return (*this).setunion(p);
}

integerSet integerSet::operator&(integerSet p) {
    return (*this).setintsection(p);
}

integerSet integerSet::operator-(integerSet p) {
    return (*this).setdifference(p);
}

integerSet& integerSet::operator=(integerSet p) {
    int* n = new int[p.capacity()];
    delete[] elements;
    elements=n;
    used=0;
    ability=p.capacity();
    for(int i=0;i<p.size();i++){
        insert(p.element()[i]);
    }
    return *this;
}

ostream& operator<<(ostream& os, integerSet& c) {
    os<<"{";
    if(c.size()!=0){
        for(int i=0;i<c.size()-1;i++){
            os<<c.element()[i]<<",";
        }
        os<<c.element()[c.size()-1];
    }
    os<<"}";
    return os;
}

istream& operator>>(istream& is, integerSet& c) {
    int s;
    is>>s;
    c.insert(s);
    return is;
}

integerSet& integerSet:: operator&=(integerSet& c) {
    (*this)=setsymmetricdifference(c);
    return *this;
}

integerSet& integerSet::operator|=(integerSet & c) {
    (*this)=setunion(c);
    return *this;
}

integerSet& integerSet::operator-=(integerSet & c) {
    (*this)=setdifference(c);
    return *this;
}

integerSet::~integerSet(){
    delete[]elements;//dtor
}
