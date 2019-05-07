//----------------------------------------------------------------------
//
// integerSetTest.cpp : Test program for Lab锛欰 Class Definition锛圧evisited).
//
//----------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "integerSet.h"  // your header file for class integerSet

int main(int argc,char**argv)
try
{
    // ***** test for initialization *****

    integerSet s1{100};  // an integer set with 100 maximum elements
    integerSet s2{110};  // an integer set with 110 maximum elements

    // ***** test for printing *****

    cout << "Set s1 after initialization: " << endl;
    cout << s1;     // display set
    cout << endl;

    // ***** test for sizing *****

    cout << "The number of elements in Set s1: " << s1() << endl;
    cout << "The capacity of Set s1: " << s1.capacity() <<endl;

    cout << endl << "Set s2 after initialization: " << endl;
    cout << s2 << endl;
    cout << "The number of elements in Set s2: " << s2() << endl;
    cout << "The capacity of Set s2: " << s2.capacity() << endl;
    cout << endl;

    // ***** test for inserting *****

    for (int i{200};i<250;i++) s1.insert(i);        // insert 50 elements from 200 to 249
    for (int i{130};i<230;i++) s2.insert(i);        // insert 100 elements from 130 to 229

    cout << "Set s1 after insertion: " << endl;
    cout << s1 << endl;
    cout << "The number of elements in Set s1: " << s1() << endl;
    cout << "The capacity of Set s1: " << s1.capacity() << endl;
    cout << endl << "Set s2 after insertion: " << endl;
    cout << s2 << endl;
    cout << "The number of elements in Set s2: " << s2() << endl;
    cout << "The capacity of Set s2: " << s2.capacity() << endl;
    cout << endl;

    // ***** test for union *****

    cout << "Union of two integer sets s1 and s2: " << endl;
    cout << s1 << " 鈭?" << s2 << " = ";
    integerSet r1{s1|s2};   // compute union of two integer sets
    cout << r1 << endl;
    cout << endl;

    // ***** test for intersection *****

    cout << "intersection of two integer sets s1 and s2: " << endl;
    cout << s1 << " 鈭?" << s2 << " = ";
    integerSet r2{s1&s2};  // compute intersection of two integer sets
    cout << r2 << endl;
    cout << endl;

    // ***** test for difference *****

    cout << "difference of two integer sets s1 and s2: " << endl;
    cout << s1 << " 锛?" << s2 << " = ";
    integerSet r3{s1-s2};     // compute difference of two integer sets
    cout << r3 << endl;
    cout << endl;

    cout << "difference of two integer sets s2 and s1: " << endl;
    cout << s2 << " 锛?" << s1 << " = ";
    integerSet r4{s2-s1};     // compute difference of two integer sets
    cout << r4 << endl;
    cout << endl;

    // ***** test for symmetric difference *****

    cout << "symmetric difference of two integer sets s1 and s2: " << endl;
    cout << s1 << " symmetric锛?" << s2 << " = ";
    integerSet r5{s1.setsymmetricdifference(s2)};   // compute symmetric difference of two integer sets
    cout << r5 << endl;
    cout << endl;

    // ***** test for assignment *****

    cout << "Set s1 after assignment s1=s2: " << endl;
    s1=s2;
    cout << s1 << endl;
    cout << endl;

    // ***** test for "clear" *****

    cout << "Set s2 after erasing all elements: " << endl;
    s2.clear();
    cout << s2 << endl;
    cout << endl;

    // ***** test for "isEmpty" *****

    if (s1.isEmpty()) cout << "Set s1 is empty " << endl;
    else cout << "Set s1 is NOT empty " << endl;
    cout << endl;

    if (s2.isEmpty()) cout << "Set s2 is empty " << endl;
    else cout << "Set s2 is NOT empty " << endl;
    cout << endl;

    // ***** test for "erase" *****

    cout << "Set s1 after erasing an element 211 : " << endl;
    s1.erase(211);
    cout << s1 << endl;
    cout << endl;
    cout << "Set s1 after erasing an element 288 : " << endl;
    s1.erase(288);
    cout << s1 << endl;
    cout << endl;

    // ***** test for "isMember" *****
    int e{222};
    if (s1.isMember(e)) cout << e << " is a member of s1" << endl;
    else cout << e << " is NOT a member of s1" << endl;
    cout << endl;
    e+=888;
    if (s1.isMember(e)) cout << e << " is a member of s1" << endl;
    else cout << e << " is NOT a member of s1" << endl;
    cout << endl;


    // ***** test for "isSubset" *****

    if (s1.isSubset(s2)) cout << "Set s2 is a subset of s1" << endl;
    else cout << "Set s2 is NOT a subset of s1" << endl;
    cout << endl;

    cout << "Insert an element 888 into set s2 : " << endl;
    s2.insert(888);
    cout << "Set s2 : " << endl << s2 << endl;

    cout << endl;

    if (s1.isSubset(s2)) cout << "Set s2 is a subset of s1" << endl;
    else cout << "Set s2 is NOT a subset of s1" << endl;
    cout << endl;

    // ***** test for input *****
    cout << "Input s1 and s2 (format: N e1 e2鈥? : " << endl;
    cin >> s1 >> s2;
    cout << "Set s1 after input : " << endl << s1 << endl;
    cout << "Set s2 after input : " << endl << s2 << endl;
    cout << endl;

    // ***** test for assignments *****
    cout << "Set s1 after s1|=s2 : " << endl << (s1|=s2) << endl;
    cout << endl;
    cout << "Set s1 after s1&=s2 : " << endl << (s1&=s2) << endl;
    cout << endl;
    cout << "Set s1 after s1-=s2 : " << endl << (s1-=s2) << endl;
    cout << endl;



    // ***** test for exception throwing *****

    cout << "insert 1000 elements from 1 to 999 into set s1 : " << endl;
    for (int i{1};i<1000;i++)
        s1.insert(i);        // insert 1000 elements from 1 to 999

    return 0;
}

// ***** exception handling *****

catch(integerSet::bad_integerSet bi)  // catch exceptions related to integer set
{ switch (bi.errnum)          // # of exceptions
    { case 1: cerr << "bad integerSet: constructor parameter<1 , exit " << endl;
            // error of constructor parameter
            break;
        case 2: cerr << "bad integerSet: maximum elements reached, exit " << endl;
            // overflow of integer set
            break;
    }
    return 0;
}
