// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        int ans = -1;
        for (int k = l; k <= r; k++)
        {
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (i >= k)
                {
                    sum += nums[i];
                    sum -= nums[i - k];
                }
                else
                {
                    sum += nums[i];
                }
                if (i >= k - 1)
                {
                    if (sum > 0)
                    {
                        if (ans == -1)
                        {
                            ans = sum;
                        }
                        else
                        {
                            ans = min(ans, sum);
                        }
                    }
                }
            }
        }
        return ans;
    }
};