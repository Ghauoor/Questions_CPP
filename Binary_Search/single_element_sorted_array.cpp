#include <bits/stdc++.h>

using namespace std;

//! https://leetcode.com/problems/single-element-in-a-sorted-array/description/

int singleNonDuplicate(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];

    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == nums[mid + 1])
        {
            mid = mid - 1;
        }

        if ((mid - start + 1) % 2 != 0)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return nums[start];
}