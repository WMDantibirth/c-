//
// Created by Administrator on 2019/4/30 0030.
//

#include "integerSet.h"
#include <iostream>

integerSet::integerSet(){
    elements = new int[1000];
    ability = 1000;
    used = 0;
}

integerSet::integerSet(int r){
    bad_integerSet bi;
    if(r<1){
        bi.errnum=1;
        throw bi;}
    elements = new int[r];
    ability = r;
    used = 0;
}

int* integerSet::element() {
    return elements;
}

void integerSet::print(){
    std::cout<<"{";
    for(int i=0;i<used-2;i++)
        std::cout<<elements[i]<<",";
    std::cout<<elements[used-1];
    std::cout<<"}"<<std::endl;
}

int integerSet::size(){
    return used;
}

void integerSet::insert(int i){
    if(!isMember(i)) {
        elements[used] = i;
        used++;
    }
}

void integerSet::erase(int i){
    for(int j=0;j<used;j++){
        if(elements[j]==i){
            for(int p=j;p<used-1;p++){
                elements[p]=elements[p+1];
            }
            used--;
            break;
        }
    }
}

bool integerSet::isEmpty(){
    if(used==0)return true;
    else return false;
}

int integerSet::capacity(){
    return ability;
}

void integerSet::clear(){
    used=0;
}

bool integerSet::isMember(int r){
    for(int i=0;i<used;i++){
        if(elements[i]==r){
            return true;
        }
    }
    return false;
}

bool integerSet::isSubset(integerSet p){
    if(p.size() > used) return false;
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
    integerSet out;
    for(int i=0;i<used;i++){
        if(!p.isMember(elements[i])){
            out.insert(elements[i]);
        }
    }
    for(int j=0;j<p.size();j++){
        if(!isMember(p.element()[j])){
            out.insert(p.element()[j]);
        }
    }
    return out;
}

integerSet integerSet::setunion(integerSet p) {
    integerSet out;
    for(int i =0;i<used;i++)out.insert(elements[i]);
    for(int j=0;j<p.size();j++){
        if(!isMember(p.element()[j])){
            out.insert(p.element()[j]);
        }
    }
    return out;
}

integerSet integerSet::setintsection(integerSet t) {
    integerSet ans;
    for(int i=0; i<used; i++)
    {
        int flag=0;
        for(int j=0; j<t.size(); j++)
            if(elements[i]==t.element()[j])
            {
                flag=1;
                break;
            }
        if(flag)ans.insert(elements[i]);
    }
    return ans;
}

integerSet integerSet::setsymmetricdifference(integerSet p) {
    integerSet r1{p.setdifference(*this)};
    integerSet r2{(*this).setdifference(p)};
    return r1.setunion(r2);
}

integerSet::~integerSet(){
    delete[]elements;//dtor
}
