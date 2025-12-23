// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int lcm(int a, int b)
    {
        return a * b / gcd(a, b);
    }
    int maxLength(vector<int> &nums)
    {
        int n = nums.size(), ans = 1;
        for (int i = 0; i < n; i++)
        {
            int p = nums[i], l = nums[i], g = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                p *= nums[j];
                l = lcm(l, nums[j]);
                g = gcd(g, nums[j]);
                if (p == g * l)
                {
                    ans = max(ans, j - i + 1);
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};