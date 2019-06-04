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
        char charzi;
    public:
        explicit CHAR(char);
        void print();
};

class INT :public Base
{
    private:
        int intzi;
    public:
        explicit INT(int);
        void print();
};

class PhoneNumber :public Base
{
    private:
        int num;
        string name;
    public:
        PhoneNumber();
        void print();
        friend istream&operator>>(istream&,PhoneNumber&);
};

class Hqueue
{
    private:
        int num;
        Base**Hq;
        int qian=0;
        int hou=0;
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
