#include <iostream>

using namespace std;

bool search(int arr[], int size, int key)
{

  if (size == 0)
  {
    return false;
  }
  if (arr[0] == key)
  {
    return true;
  }
  else
  {

    bool remainingPart = search(arr + 1, size - 1, key);
  }
}

int main()
{

  int arr[5] = {3, 5, 1, 2, 6};

  int size = 5;
  int key = 7;

  bool ans = search(arr, size, key);
  if (ans)
  {
    cout << "Target Is Present..." << endl;
  }
  else
  {

    cout << "Target Is Not Present";
  }

  return 0;
}