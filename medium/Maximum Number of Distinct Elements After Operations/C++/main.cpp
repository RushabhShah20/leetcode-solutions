// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
class Solution
{
public:
    int maxDistinctElements(vector<int> &nums, int k)
    {
        int ans = 0, x = INT_MIN;
        sort(nums.begin(), nums.end());
        for (int num : nums)
        {
            int l = num - k, r = num + k;
            if (x < l)
            {
                x = l;
                ans++;
            }
            else if (x < r)
            {
                x++;
                ans++;
            }
        }
        return ans;
    }
};