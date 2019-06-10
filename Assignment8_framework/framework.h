#ifndef FRAMEWORK_H // framework.h
#define FRAMEWORK_H

struct Filter
{
  Filter() { }
  virtual ~Filter() { }

  virtual void start() { }
  virtual int read()=0;
  virtual void write() { }
  virtual void compute() { }
  virtual int result()=0;
};

#include "yourApp.h"

#endif
