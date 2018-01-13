#include <iostream>

/// A CLI application,
/// that either says 'Hello' when
/// the user has not supplied any CL arguments,
/// else will show 'Hello', a space and the
/// first (and only the first) supplied argument
int main(int argc, char *argv[])
{
  std::cout << "Hello";
  if (argc > 1)
  {
    std::cout << ' ' << argv[1];
  }
  std::cout << '\n';
}
