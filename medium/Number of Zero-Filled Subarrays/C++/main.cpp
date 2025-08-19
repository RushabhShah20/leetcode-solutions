// Problem: Number of Zero-Filled Subarrays
// Link to the problem: https://leetcode.com/problems/number-of-zero-filled-subarrays/
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long ans = 0, count = 0;
        if (nums[0] == 0)
        {
            count++;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
            else
            {
                long long x = ((count) * (count + 1)) / 2;
                ans += x;
                count = 0;
            }
        }
        if (count != 0)
        {
            long long x = ((count) * (count + 1)) / 2;
            ans += x;
        }
        return ans;
    }
};