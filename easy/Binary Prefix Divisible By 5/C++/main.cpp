// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
class Solution
{
public:
    vector<bool> prefixesDivBy5(vector<int> &nums)
    {
        int rem = 0;
        vector<bool> ans;
        for (const int num : nums)
        {
            rem = (2 * rem + num) % 5;
            if (rem == 0)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};