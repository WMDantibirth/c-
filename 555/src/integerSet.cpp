#include "integerSet.h"

integerSet::integerSet()
{
    new a int[500];
    a->elements;
}

integerSet::integerSet(int r)
{
    max=r;
}

integerSet::print()
{
    cout<<"{";
    for(int i=0;i<elements.size()-2;i++)
        cout<<elements[i]<<",";
    cout<<elements[elements.size()-1];
    cout<<"}"<<endl;
}

integerSet::size()
{
    cout<<max<<endl;
}

integerSet::~integerSet()
{
    //dtor
}
