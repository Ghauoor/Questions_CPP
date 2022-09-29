#include <iostream>

using namespace std;

int modularExponentiation(int x, int n, int m)
{

  int res = 1;

  while (n > 0)
  {
    if (x & 1)
    { //* odd case
      res = (1LL * (res) * (x) % m) % m;
    }

    x = (1LL * (x) % m * (x) % m) % m;

    // same as divide by 2
    n = n >> 1;
  }
  return res;
}

int main()
{
  int x = 23;
  int n = 2;
  int m = 5;

  cout << modularExponentiation(x, n, m);
}