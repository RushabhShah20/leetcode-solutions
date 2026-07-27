// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        const int n = nums.size();
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > x)
            {
                y = x;
                x = nums[i];
            }
            else if (nums[i] > y)
            {
                y = nums[i];
            }
        }
        const int ans = (x - 1) * (y - 1);
        return ans;
    }
};