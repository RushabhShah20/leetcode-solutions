// Problem: Arithmetic Slices
// Link to the problem: https://leetcode.com/problems/arithmetic-slices/
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, x = 0;
        for (int i = 2; i < n; i++)
        {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
            {
                x++;
            }
            else
            {
                ans += (x * (x + 1)) >> 1;
                x = 0;
            }
        }
        ans += (x * (x + 1)) >> 1;
        return ans;
    }
};