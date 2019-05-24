//----------------------------------------------------------------------
//
//powerTest.cpp : Test program for Lab：An Operator Definition.
//
//----------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "power.h"  // your header file

int powerbyMultiply(unsigned a, unsigned b)
{ unsigned r{1};  while (b--) r*=a;  return r; }

int main()
{
    unsigned a{5},b{10};
    cout << powerbyMultiply(a,b) << endl;
    X B{b}; // define a helper class X by yourself
    cout << a**B << endl;

    cin >> a>> b;
    cout << powerbyMultiply(a,b) << endl;
    B=b;
    cout << a**B <<endl;
    return 0;
}
