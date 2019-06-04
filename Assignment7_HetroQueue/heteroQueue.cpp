//
// Created by wmd on 2019/6/4.
//

#include "heteroQueue.h"
#include <iostream>
using  namespace std;
Hqueue::Hqueue()
{
    Hq=new Base* [400];
    num=0;
}
Hqueue::~Hqueue()
{
    delete[]Hq;
}
bool Hqueue::isEmpty()
{
    return num==0;
}
void Hqueue::enqueue(Base *ii)
{
    Hq[qian]=ii;
    qian++;
    num++;
}
void Hqueue::dequeue()
{
    (*Hq[hou]).print();
    hou++;
    num--;
}
CHAR::CHAR(char a)
{
    charzi=a;
}
void CHAR::print()
{
    cout<<"CHAR:   "<<charzi<<endl;
}
INT::INT(int a)
{
    intzi=a;
}
void INT::print()
{
    cout<<"INT:   "<<intzi<<endl;
}
PhoneNumber::PhoneNumber()
{
    num=0;
    name="";
}
void PhoneNumber::print()
{
    cout<<"PhoneNumber:  ("<<name<<","<<num<<")"<<endl;
}
istream & operator>>(istream & is,PhoneNumber &pn)
{
    is>>pn.name>>pn.num;
    return is;
}
