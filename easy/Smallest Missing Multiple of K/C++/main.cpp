// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        const int n = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        int ans = k;
        while (s.count(ans))
        {
            ans += k;
        }
        return ans;
    }
};