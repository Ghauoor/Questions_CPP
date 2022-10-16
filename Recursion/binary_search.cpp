#include <iostream>

using namespace std;

bool binarySearch(int arr[], int s, int e, int k)
{
  // base case

  if (s > e)
  {
    return false;
  }

  int mid = s + (e - s) / 2;
  if (arr[mid] == k)
    return true;

  if (arr[mid] < k)
  {
    return binarySearch(arr, mid + 1, e, k);
  }
  else
  {
    return binarySearch(arr, s, mid - 1, k);
  }
}

int main()
{

  int arr[6] = {2, 4, 6, 10, 14, 16};
  int size = 6;
  int key = 16;

  bool ans = binarySearch(arr, 0, size, key);

  if (ans)
  {
    cout << "Element is Found";
  }
  else
  {
    cout << "Element is Not Found";
  }

  return 0;
}