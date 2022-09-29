#include <iostream>
#include <vector>
using namespace std;

bool checkArray(vector<int> &arr)
{
  int count = 0;
  int n = arr.size();
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i - 1] > arr[i])
    {
      count++;
    }
  }
  if (arr[n - 1] > arr[0])
    count++;

  return count == 1;
}

//* Print fun..
void print(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v;
  v.push_back(11);
  v.push_back(7);
  v.push_back(3);
  v.push_back(12);
  v.push_back(4);

  cout << checkArray(v);
}
