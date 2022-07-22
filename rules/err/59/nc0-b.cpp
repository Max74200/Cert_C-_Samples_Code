// ERR59-CPP: Noncompliant Code Example
// library.cpp
void func() noexcept(false) {
  // ...
  if (true) {
    throw 42;
  }
}
