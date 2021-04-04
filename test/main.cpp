#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string s = "this is a sample string";
  string sa[] = {"first", "second"};
  string *p = &sa[0];

  cout << "sa    " << sa << endl;
  cout << "sa[0]    " << sa[0] << endl;
  cout << "&sa    " << &sa << endl;
  cout << "sa+1    " << sa + 1 << endl;
  cout << "p    " << p << endl;
  cout << "*p    " << *p << endl;
  cout << "*(p + 1)    " << *(p + 1) << endl;

  return 0;
}