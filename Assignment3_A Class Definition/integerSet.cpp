#include "integerSet.h"

integerSet::integerSet()
{
    elements = int[500];
    ability = 500;
    used = 0;
}

integerSet::integerSet(int r)
{
    elements = new int[r];
    ability = r;
    used = 0;
}

integerSet::print()
{
    std::cout<<"{";
    for(int i=0;i<used-2;i++)
        std::cout<<elements[i]<<",";
    std::cout<<elements[used-1];
    std::cout<<"}"<<std::endl;
}

integerSet::size()
{
    return used;
}

integerSet::insert(int i)
{
    elements[used] = i;
    used++;
}

integerSet::erase(int i)
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

integerSet::isEmpty()
{
    if(used==0)return true;
    else return false;
}

integerSet::capacity()
{
    return ability;
}

integerSet::clear()
{
    used=0;
}

integerSet::isMember(int r)
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

integerSet::isSubset(integerSet p)
{
    if(p.used > used) return false;
    else
    {
        for(int i=0;i<p.used;i++)
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
