#ifndef YOURAPP_H
#define YOURAPP_H
#include<iostream>
#include"framework.h"
using namespace std;

class Your_filter: public Filter
{
    istream is;ostream os;int nline=0;string line;int nchar;
    public:
        Your_filter(istream&,ostream&);
        int read();
        void write();
        void compute();
        int result();
};

#endif // YOURAPP_H
