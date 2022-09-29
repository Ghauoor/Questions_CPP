#include <iostream>

using namespace std;

bool checkPalindrome(char str[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s <= e)
  {
    if (str[s] != str[e])
    {
      return 0;
    }
    else
    {
      s++;
      e--;
    }
  }
  return 1;
}
