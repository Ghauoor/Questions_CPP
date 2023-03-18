#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        unordered_map<char, int> count;
        queue<int> q;

        string ans = "";

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];

            // increase count
            count[ch]++;

            // que push
            q.push(ch);

            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // reapting char
                    q.pop();
                }
                else
                {
                    // non repating
                    ans.push_back(q.front());
                    break;
                }
            }

            if (q.empty())
            {
                ans.push_back('#');
            }
        }

        return ans;
    }
};