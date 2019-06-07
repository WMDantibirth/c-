//
// Created by wmd on 2019/6/4.
//

#include "heteroQueue.h"
#include <iostream>
using  namespace std;
Hqueue::Hqueue()
{
    Hq=new Base* [4000];
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
    Hq[input_num]=ii;
    input_num++;
    num++;
}
void Hqueue::dequeue()
{
    if(num<=0){
        bad_op bi;
        bi.type = "There is nothing in it";
        throw bi;
    }
    else{
        (*Hq[output_num]).print();
        output_num++;
        num--;
    }
}
CHAR::CHAR(char a)
{
    char_contain=a;
}
void CHAR::print()
{
    cout<<"CHAR:   "<<char_contain<<endl;
}
INT::INT(int a)
{
    int_contain=a;
}
void INT::print()
{
    cout<<"INT:   "<<int_contain<<endl;
}
PhoneNumber::PhoneNumber()
{
    num=0;
    name="";
}
PhoneNumber::PhoneNumber(string s, int i)
{
    num = i;
    name = s;
    initial = true;
}
void PhoneNumber::print()
{
    if(initial)
        cout<<"PhoneNumber:  ("<<name<<","<<num<<")"<<endl;
    else{
        Hqueue::bad_op bi;
        bi.type = "The PhoneNumber has not been initialized";
        throw bi;
    }
}
istream & operator>>(istream & is,PhoneNumber &pn)
{
    pn.initial = true;
    is>>pn.name>>pn.num;
    return is;
}
