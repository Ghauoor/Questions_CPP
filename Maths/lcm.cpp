#include <iostream>

using namespace std;

int gcd(int a, int b)
{

  if (a == 0)
    return b;

  return gcd(b % a, a);
}

int lcm(int a, int b)
{

  return (a * b) / gcd(a, b);
}

int main()
{

  int a, b;

  cout << "Enter the value of A and B: " << endl;

  cin >> a >> b;

  cout << "GCD of a and b is : " << gcd(a, b) << endl;

  cout << "LCM of a and b is : " << lcm(a, b) << endl;
}