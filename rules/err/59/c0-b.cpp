// ERR59-CPP: Compliant Solution
// library.cpp
int func() noexcept(true) {
  // ...
  if (true) {
    return 42;
  }
  // ...
  return 0;
}
