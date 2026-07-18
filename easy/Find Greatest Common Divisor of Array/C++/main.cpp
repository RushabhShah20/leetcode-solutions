// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        const int n = nums.size();
        int mx = 0, mn = 1001;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }
        const int ans = gcd(mx, mn);
        return ans;
    }
};