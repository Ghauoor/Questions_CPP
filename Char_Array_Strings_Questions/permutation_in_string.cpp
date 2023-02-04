#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        // Sliding-window approach
        int m[26] = {0};
        // Character array
        for (char c : s1)
            m[c - 'a']++;

        int j = 0, i = 0, total_char = s1.size();

        while (j < s2.size())
        {
            if (m[s2.at(j++) - 'a']-- > 0)
            {
                total_char--;
            }

            if (total_char == 0)
                return true;
            // shifting window
            if (j - i == s1.size() && m[s2.at(i++) - 'a']++ >= 0)
            {
                total_char++;
            }
        }

        return false;
    }
};