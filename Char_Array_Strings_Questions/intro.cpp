#include <iostream>

using namespace std;

int getingLenght(char name[])
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
  cout << "Enter your name :";
  cin >> name;

  cout << "Your name is: " << name << endl;

  cout << "Length: " << getingLenght(name) << endl;
}
