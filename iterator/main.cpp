#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  int casts[10] = {6, 72, 94, 11, 8, 7, 10, 5};

  vector<int> dice(10);

  copy(casts, casts + 10, dice.begin());

  cout << "Let the dice be cast" << endl;

  ostream_iterator<int, char> out(cout, "__");

  copy(dice.begin(), dice.end(), out);

  cout << endl;

  // copy(istream_iterator<int, char>(cin), istream_iterator<int, char>(), ostream_iterator<int, char>(cout, " "));

  return 0;
}
