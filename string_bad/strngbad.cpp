#include <cstring>
#include "strng_bad.h"
using std::cout;
using std::strcpy;

int StringBad::num_strings = 0;

StringBad::StringBad(const char *s)
{
  len = std::strlen(s);
  str = new char[len + 1]; // +1 for '\0'
  strcpy(str, s);
  num_strings++;
  cout << num_strings << ": \"" << str << "\" object created\n";
}

// 复制构造函数
StringBad::StringBad(const StringBad &st)
{
  num_strings++;
  len = st.len;
  str = new char[len + 1];
  strcpy(str, st.str);
  cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
  len = 4;
  str = new char[4];
  strcpy(str, "C++");
  num_strings++;
  cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
  cout << "\"" << str << "\" object deleted, ";
  --num_strings;
  cout << num_strings << " left\n";
  delete[] str;
}

StringBad &StringBad::operator=(const StringBad &st)
{
  if (this == &st)
    return *this;

  delete[] str;
  str = new char[st.len + 1];
  strcpy(str, st.str);
  return *this;
}

std::ostream &operator<<(std::ostream &os, const StringBad &st)
{
  os << st.str;
  return os;
}