// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            unordered_set<int> s;
            for (int j = i; j < n; j++)
            {
                s.insert(nums[j]);
                ans += s.size() * s.size();
            }
        }
        return ans;
    }
};