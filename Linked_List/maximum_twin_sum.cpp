#include <bits/stdc++.h>
using namespace std;

//! https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/


struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int pairSum(ListNode *head)
    {
        vector<int> vec;
        ListNode *curr = head;

        while (curr != NULL)
        {
            vec.push_back(curr->val);
            curr = curr->next;
        }

        int res = 0;

        int i = 0;
        int j = vec.size() - 1;

        while (i < j)
        {
            res = max(res, vec[i] + vec[j]);
            i++;
            j--;
        }
        return res;
    }
};