//
// Created by wmd on 2019/6/4.
//

#ifndef HETEROQUEUE_H
#define HETEROQUEUE_H

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()=0;
};

class CHAR :public Base
{
private:
    char char_contain;
public:
    explicit CHAR(char);
    void print();
};

class INT :public Base
{
private:
    int int_contain;
public:
    explicit INT(int);
    void print();
};

class PhoneNumber :public Base
{
private:
    bool initial = false;
    int num;
    string name;
public:
    PhoneNumber();
    PhoneNumber(string,int);
    void print();
    friend istream&operator>>(istream&,PhoneNumber&);
};

class Hqueue
{
private:
    int num;
    Base**Hq;
    int input_num=0;
    int output_num = 0;
public:
    Hqueue();
    bool isEmpty();
    void enqueue(Base*);
    void dequeue();
    struct bad_op{
        string type="Error";
    };
    virtual ~Hqueue();
};

#endif // HETEROQUEUE_H
