// STR53-CPP: Noncompliant Code Example
#include <string>
 
extern std::size_t get_index();
 
void f() {
  std::string s("01234567");
  s[get_index()] = '1';
}
