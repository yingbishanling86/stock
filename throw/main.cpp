#include <iostream>

using namespace std;

int main()
{
  try
  {
    throw "this is a throw test";
  }
  catch (const char *s)
  {
    cerr << s << '\n';
  }

  return 0;
}