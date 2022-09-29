#include <iostream>

using namespace std;

void reverse(char name[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s < e)
  {
    swap(name[s++], name[e--]);
  }
}

int length(char name[])
{

  int count = 0;

  for (int i = 0; i < name[i] != 0; i++)
  {
    count++;
  }
  return count;
}

int main()
{

  char name[20];

  cout << "Enter Your name: ";

  cin >> name;

  cout << "Your name is: " << name << endl;

  int len = length(name);

  reverse(name, len);

  cout << name << endl;

  reverse(name, 8);

  cout << name;
}