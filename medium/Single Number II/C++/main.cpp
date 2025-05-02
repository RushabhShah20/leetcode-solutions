// Problem: Single Number II
// Link to the problem: https://leetcode.com/problems/single-number-ii/
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (i.second == 1)
            {
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};