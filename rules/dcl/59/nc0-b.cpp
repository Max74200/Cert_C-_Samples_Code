// DCL59-CPP: Noncompliant Code Example
// a.cpp
//#include "a.h"
#include <iostream>
 
void f() {
  int v;
  std::cout << "f(): " << v << std::endl;
  v = 42;
  // ...
}
