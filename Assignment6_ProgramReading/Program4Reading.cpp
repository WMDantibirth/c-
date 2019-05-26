// Read the following program carefully,
// and write the output when the program runs.

// EXPLAIN the result


#include <iostream>
#include <algorithm>  // for move
#include <cstring>
using namespace std;

int lineno=1;

struct X {
  char* s;

  X(const char* v=0)
  { cout<<"LINE "<<lineno++<<" -- ";
    if (v)
    { cout<<"CONSTRUCT:"<<v<<endl;
      s=new char[strlen(v)+1]; strcpy(s,v);
    }
    else
    { cout<<"CONSTRUCT:"<<"NULL"<<endl;
      s=new char[strlen("NULL")+1]; strcpy(s,"NULL");
    }
  }

  X(const X& x)
  { cout<<"LINE "<<lineno++<<" -- ";
    cout<<"COPY:"<<x.s<<endl;
    s=new char[strlen(x.s)+1]; strcpy(s,x.s);
  }

  X(X&& x)
  { cout<<"LINE "<<lineno++<<" -- ";
    cout<<"MOVE:"<<x.s<<endl; s=nullptr; swap(s,x.s); }

  X& operator=(X&& x)
  { cout<<"LINE "<<lineno++<<" -- ";
    cout<<"MOVE ASSIGN:"<<x.s<<endl;
    swap(s,x.s); return *this;
  }

  X& operator=(const X& x)
  { cout<<"LINE "<<lineno++<<" -- ";
    cout<<"COPY ASSIGN:"<<x.s<<endl;
    strcpy(s,x.s); return *this;
  }

  ~X( )
  { cout<<"LINE "<<lineno++<<" -- ";
    cout<<"DESTRUCT:"<<(s!=nullptr?s:"nullptr")<<endl;
    delete[] s;
  }
};

X f1 (X arg)  { return arg; }
X f2 (X& arg) { return arg; }
X f3 (X arg)  { return move(arg); }
X& g (X& arg) { return arg; }


int main()
{
  X x = "xxxx",y;  cout<<endl;
  y = f1(x);       cout<<endl;
  y = "yyyy1";     cout<<endl;
  y = f3(x);       cout<<endl;
  y = "yyyy2";     cout<<endl;
  y = f2(x);       cout<<endl;
  y = g(x);        cout<<endl;
  x = y;           cout<<endl;
  x = move(y);     cout<<endl;

  return  0;
}


