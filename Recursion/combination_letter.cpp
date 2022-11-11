#include <iostream>
#include <vector>

using namespace std;
class Solution {
private: 
    void solve (string digits, string output, int index, vector<string> &ans, string mapping[]){
        //base case
        if (index >= digits.length()){
            ans.push_back(output);
            return;
        }

        int num = digits[index] - '0';
        string value = mapping[num];

        for (int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            //Recursive Call
            solve(digits, output, index + 1, ans, mapping);

            //Backtrack 
            output.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if (digits.length() == 0){
            return ans;
        }

        solve (digits, output, index, ans, mapping);

        return ans;


        
    }
};