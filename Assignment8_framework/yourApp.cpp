#include "yourApp.h"
#include<iostream>
using namespace std;

Your_filter::Your_filter(istream&i,ostream&o){}

void Your_filter::write()
{
    os<<nchar<<endl;
}

int Your_filter::read()
{
    getline(is,line);
    nline++;
}

void Your_filter::compute()
{
    char c;
    nchar=0;
    for(int i=0;i<=line.size();i++)
    {
        c=line[i];
        if(c>=65&&c<=90)
        {
            c+=32;
        }
        int out;
        switch(c)
        {
        case 'a':
            out=1;
        case 'b':
            out=3;
        case 'c':
            out=3;
        case 'd':
            out=2;
        case 'e':
            out=1;
        case 'f':
            out=4;
        case 'g':
            out=2;
        case 'h':
            out=4;
        case 'i':
            out=1;
        case 'j':
            out=8;
        case 'k':
            out=5;
        case 'l':
            out=1;
        case 'm':
            out=3;
        case 'n':
            out=1;
        case 'o':
            out=1;
        case 'p':
            out=3;
        case 'q':
            out=10;
        case 'r':
            out=1;
        case 's':
            out=1;
        case 't':
            out=1;
        case 'u':
            out=1;
        case 'v':
            out=4;
        case 'w':
            out=4;
        case 'x':
            out=8;
        case 'y':
            out=4;
        case 'z':
            out=10;
        default:
            out=0;
        }
        nchar+=out;
    }
}


int Your_filter::result()
{
    os<<"Total "<<nline<<" line(s) precessed.\n";
    return 0;
}
