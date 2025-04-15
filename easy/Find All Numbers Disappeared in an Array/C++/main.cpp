// Problem: Find All Numbers Disappeared in an Array
// Link to the problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        vector<int> freq(nums.size(), 0);
        for (size_t i = 0; i < nums.size(); i++)
        {
            freq[nums[i] - 1]++;
        }
        for (size_t i = 0; i < freq.size(); i++)
        {
            if (freq[i] == 0)
            {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};