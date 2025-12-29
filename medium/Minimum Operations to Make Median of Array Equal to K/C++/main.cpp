// Problem: Minimum Operations to Make Median of Array Equal to K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-median-of-array-equal-to-k/
class Solution
{
public:
    long long minOperationsToMakeMedianK(vector<int> &nums, int k)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[(n / 2)] == k)
        {
            return 0;
        }
        else
        {
            long long ans = abs(nums[n / 2] - k);
            for (int i = 0; i < n; i++)
            {
                if (i < ((n / 2)))
                {
                    if (nums[i] > k)
                    {
                        ans += (nums[i] - k);
                    }
                }
                else if (i > ((n / 2)))
                {
                    if (nums[i] < k)
                    {
                        ans += (k - nums[i]);
                    }
                }
            }
            return ans;
        }
    }
};