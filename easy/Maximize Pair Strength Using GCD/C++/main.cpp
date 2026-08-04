// Problem: Maximize Pair Strength Using GCD
// Link to the problem: https://leetcode.com/problems/maximize-pair-strength-using-gcd/
class Solution
{
public:
    long long maxPairStrength(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                const long long x = __gcd(nums[i], nums[j]);
                ans = max(ans, ((long long)(nums[i]) * (long long)(nums[j])) / (x * x));
            }
        }
        return ans;
    }
};