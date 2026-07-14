// Problem: Largest Unique Number
// Link to the problem: https://leetcode.com/problems/largest-unique-number/
class Solution
{
public:
    int largestUniqueNumber(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        int ans = -1;
        for (const pair<int, int> i : m)
        {
            if (i.second == 1)
            {
                ans = max(ans, i.first);
            }
        }
        return ans;
    }
};