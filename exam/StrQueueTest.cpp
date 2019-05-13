//----------------------------------------------------------------------
//
// testStrQueue.cpp : Test program for Test_ClassDefinition.
//
//----------------------------------------------------------------------

#include "strQueue.h" // your own header file

#include <iostream>
#include <string>
using namespace std;

int main(int argc,char **argv)
try
{ StringQueue sq1{10}; // with capacity 10
  cout << "Enqueue:  " << endl;
  string a[]{"张三","李四","bjarne stroustrup","S4","S5","S6","S7","S8"};
  for (unsigned i{0};i<sizeof(a)/sizeof(a[0]);i++)
  { sq1.enqueue(a[i]); cout<<a[i]<<endl; }
  cout << endl;
  StringQueue sq2{sq1};

  cout << "Dequeue:  " << endl;
  while (!sq1.isEmpty()) cout << sq1.dequeue() << endl;
  cout << endl;

  cout << "Enter a sequence of strings to enqueue(^d to end): " << endl;
  string s; while (getline(cin,s),cin) sq1.enqueue(s);
  cout << endl;
  StringQueue sq3{5};
  sq3=sq1;

  cout << "Dequeue:  " << endl;
  while (!sq1.isEmpty()) cout << sq1.dequeue() << endl;
  cout << endl;

  cout << "Dequeue sq2:  " << endl;
  while (!sq2.isEmpty()) cout << sq2.dequeue() << endl;
  cout << endl;

  cout << "Dequeue sq3:  " << endl;
  while (!sq3.isEmpty()) cout << sq3.dequeue() << endl;
  cout << endl;

  // test exception handling
  cout << sq1.dequeue() << endl;


  return 0;
}
catch(StringQueue::bad_op bi) // enqueue on full, dequeue on empty
{ cerr << bi.type << ", exit " << endl;  return 0; }
