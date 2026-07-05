// Problem: Unique Middle Element
// Link to the problem: https://leetcode.com/problems/unique-middle-element/
class Solution
{
public:
    bool isMiddleElementUnique(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        const bool ans = m[nums[n / 2]] == 1;
        return ans;
    }
};