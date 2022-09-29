#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k)
{
  vector<int> temp(nums.size());

  for (int i = 0; i < nums.size(); i++)
  {
    temp[(i + k) % nums.size()] = nums[i];
  }
  nums = temp;
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

  int k = 2;

  cout << "Before Rotating Array: ";
  print(v);

  rotate(v, k);
  cout << "After Rotating Array: ";
  print(v);
}