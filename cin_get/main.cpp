#include <iostream>

using namespace std;

int main()
{
  int ct = 0;
  char ch;
  cin.get(ch);
  while (ch != '\n')
  {
    cout << ch;
    ct++;
    cin.get(ch);
  }

  cout << ct << endl;

  return 0;
}