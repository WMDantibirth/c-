#include <iostream> // framework.cpp
using namespace std;

#include "framework.h"

int main_loop(Filter* p)
{  p->start();
   while (p->read()) { p->compute(); p->write(); }
   return p->result();
}

int main()
{  Your_filter f(cin,cout);
   return main_loop(&f);
}
