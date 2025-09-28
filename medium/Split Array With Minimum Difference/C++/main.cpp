// Problem: Split Array With Minimum Difference
// Link to the problem: https://leetcode.com/problems/split-array-with-minimum-difference/
class Solution
{
public:
    long long splitArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        vector<bool> canIncrease(n, true);
        for (int i = 1; i < n; i++)
        {
            canIncrease[i] = canIncrease[i - 1] && (nums[i] > nums[i - 1]);
        }
        vector<bool> canDecrease(n, true);
        for (int i = n - 2; i >= 0; i--)
        {
            canDecrease[i] = canDecrease[i + 1] && (nums[i] > nums[i + 1]);
        }
        long long minDiff = LLONG_MAX;
        bool z = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (canIncrease[i] && canDecrease[i + 1])
            {
                z = true;
                long long x = prefix[i + 1];
                long long y = prefix[n] - prefix[i + 1];
                long long diff = abs(x - y);
                minDiff = min(minDiff, diff);
            }
        }
        return z ? minDiff : -1;
    }
};