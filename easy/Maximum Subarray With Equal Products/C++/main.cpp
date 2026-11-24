// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
class Solution
{
public:
    int gcd(const int a, const int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int maxLength(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 2, x = 1, i = 0;
        for (int j = 0; j < n; j++)
        {
            while (gcd(x, nums[j]) > 1)
            {
                x /= nums[i];
                i++;
            }
            x *= nums[j];
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};