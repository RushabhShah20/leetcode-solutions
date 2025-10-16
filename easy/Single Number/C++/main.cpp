// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};