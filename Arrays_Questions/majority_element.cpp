#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(vector<int> &nums)
{

    int n = nums.size(), count;
    for (int i = 0; n && i <= n / 2; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
            if (nums[j] == nums[i])
                count++;

        if (count > n / 2)
            return nums[i];
    }

    return -1;
}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(12);
    v.push_back(0);

    cout << "Majority Element is " << findMajorityElement(v);
}
