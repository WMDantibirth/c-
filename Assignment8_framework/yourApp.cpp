#include "yourApp.h"
#include<iostream>
using namespace std;

Your_filter::Your_filter(istream& ii,ostream& oo):is(ii),os(oo)
{
    nchar = 0;
}

void Your_filter::write()
{
    os<<nchar<<endl;
}

int Your_filter::read()
{
    if(getline(is,line)) {
        nline++;
        return 1;
    }
    else return 0;
}

void Your_filter::compute() {
    char c;
    nchar = 0;
    for (int i = 0; i <= line.size(); i++) {
        c = line[i];
        if (c >= 65 && c <= 90) {
            c += 32;
        }
        int out;
        int list[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
        if (c >= 'a' && c <= 'z') out = list[c - 'a'];
        else if (c >= 'A' && c <= 'Z') out = list[c - 'A'];
        else out = 0;
        nchar+=out;
    }
}

int Your_filter::result()
{
    os<<"Total "<<nline<<" line(s) precessed.\n";
    return 0;
}
