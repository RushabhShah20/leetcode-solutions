// Problem: Maximum Total Value of Covered Indices
// Link to the problem: https://leetcode.com/problems/maximum-total-value-of-covered-indices/
class Solution
{
public:
    long long maxTotal(vector<int> &nums, string s)
    {
        const int n = nums.size();
        long long a = 0, b = 0;
        if (s[0] == '0')
        {
            a = 0;
            b = nums[0];
        }
        else
        {
            a = nums[0];
            b = nums[0];
        }
        for (int i = 1; i < n; i++)
        {
            const long long x = s[i] == '0' ? a : max(a + nums[i], b), y = s[i] == '0' ? a + nums[i] : max(a, b) + nums[i];
            a = x;
            b = y;
        }
        const long long ans = a;
        return ans;
    }
};