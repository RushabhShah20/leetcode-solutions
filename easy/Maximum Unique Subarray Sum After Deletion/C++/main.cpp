// Problem: Maximum Unique Subarray Sum After Deletion
// Link to the problem: https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/
class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        int ans = 0;
        set<int> s(nums.begin(), nums.end());
        int maxElement = *max_element(s.begin(), s.end());
        if (maxElement < 0)
        {
            return maxElement;
        }
        else
        {
            for (auto it = s.begin(); it != s.end(); it++)
            {
                if (*it > 0)
                {
                    ans += *it;
                }
            }
            return ans;
        }
    }
};