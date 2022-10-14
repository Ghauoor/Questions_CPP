#include <iostream>
#include <vector>

using namespace std;
void moveZeroes(vector<int> &arr)
{
  int nonZero = 0;
  for (int j = 0; j < arr.size(); j++)
  {
    if (arr[j] != 0)
    {
      swap(arr[j], arr[nonZero]);
      nonZero++;
    }
  }
}

// Print fun
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
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(3);
  v.push_back(12);
  v.push_back(0);

  cout << "Before moving zeros: ";
  print(v);

  moveZeroes(v);
 cout << "After moving zeroes: ";  
  print(v);
 
}
