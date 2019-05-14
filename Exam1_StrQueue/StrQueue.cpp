#include "StrQueue.h"
#include <cstring>
#include <iostream>
using namespace std;

StringQueue::StringQueue(int m)
{
    strings = new char[5000];
    ability = m;
    used = 0;
    num=0;
}

StringQueue::~StringQueue()
{
    delete[] strings;
}

StringQueue::StringQueue(StringQueue& p)
{
    strings = new char[5000];
    ability = p.ability;
    used = p.used;
    num = p.num;
    for(int i=0;i<5000;i++)
    {
        strings[i]=p.strings[i];
    }
}

void StringQueue::enqueue(string p)
{
    if(num<ability)
    {
        num++;
        for(int i=0;i<p.size();i++)
        {
            strings[used]=p[i];
            used++;
        }
        strings[used]='\0';
        used++;
    }
    else
    {
        bad_op bi;
        bi.type = "FULL!";
        throw bi;
    }
}

bool StringQueue::isEmpty()
{
    return num==0;
}

bool StringQueue::isFull()
{
    return num==ability;
}

string StringQueue::dequeue()
{
    if(num!=0)
    {
        int zero;
        string out;
        for(int i=0;i<5000;i++)
        {
            if(strings[i]=='\0')
            {
                zero=i;
                break;
            }
            out+=strings[i];
        }
        for(int i=0;i<used-zero;i++)
        {
            strings[i]=strings[i+zero+1];
        }
        num--;
        used = used-1-zero;
        return out;
    }
    else
    {
        bad_op bi;
        bi.type = "EMPTY!";
        throw bi;
    }
}

StringQueue& StringQueue::operator=(StringQueue p)
{
    char* n = new char[5000];
    delete[] strings;
    strings = n;
    used = p.used;
    ability = p.ability;
    num = p.num;
    for(int i=0;i<5000;i++)
    {
        strings[i]=p.strings[i];
    }
    return *this;
}

