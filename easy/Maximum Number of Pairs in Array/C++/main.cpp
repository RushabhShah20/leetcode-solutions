// Problem: Maximum Number of Pairs in Array
// Link to the problem: https://leetcode.com/problems/maximum-number-of-pairs-in-array/
class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        vector<int> ans(2, 0);
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            ans[0] += (i.second / 2);
            ans[1] += (i.second % 2);
        }
        return ans;
    }
};