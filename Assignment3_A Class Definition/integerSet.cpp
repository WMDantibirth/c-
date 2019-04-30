//
// Created by Administrator on 2019/4/30 0030.
//

#include "integerSet.h"
#include <iostream>

integerSet::integerSet()
{
    elements = new int[500];
    ability = 500;
    used = 0;
}

integerSet::integerSet(int r)
{
    elements = new int[r];
    ability = r;
    used = 0;
}

void integerSet::print()
{
    std::cout<<"{";
    for(int i=0;i<used-2;i++)
        std::cout<<elements[i]<<",";
    std::cout<<elements[used-1];
    std::cout<<"}"<<std::endl;
}

int integerSet::size()
{
    return used;
}

void integerSet::insert(int i)
{
    elements[used] = i;
    used++;
}

void integerSet::erase(int i)
{
    for(int j=0;j<used;j++)
    {
        if(elements[j]==i)
        {
            for(int p=j;p<used-1;p++)
            {
                elements[p]=elements[p+1];
            }
            used--;
            break;
        }
    }
}

bool integerSet::isEmpty()
{
    if(used==0)return true;
    else return false;
}

int integerSet::capacity()
{
    return ability;
}

void integerSet::clear()
{
    used=0;
}

bool integerSet::isMember(int r)
{
    for(int i=0;i<used;i++)
    {
        if(elements[i]==r)
        {
            return true;
            break;
        }
    }
    return false;
}

bool integerSet::isSubset(integerSet p)
{
    if(p.size() > used) return false;
    else
    {
        for(int i=0;i<p.size();i++)
        {
            for(int j=0;j<used;j++)
            {
                if(elements[j]==p.elements[i]) break;
                else if(j==used-1||elements[j]!=p.elements[i]) return false;
            }
        }
        return true;
    }
}

integerSet::~integerSet()
{
    //dtor
}
