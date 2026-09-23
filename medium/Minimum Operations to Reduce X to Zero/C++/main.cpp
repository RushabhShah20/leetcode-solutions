// Problem: Minimum Operations to Reduce X to Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        const int n = nums.size();
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            y += nums[i];
        }
        int mn = INT_MAX, i = 0;
        for (int j = 0; j < n; j++)
        {
            y -= nums[j];
            while (y < x && i <= j)
            {
                y += nums[i];
                i += 1;
            }
            if (y == x)
            {
                mn = min(mn, n - 1 - j + i);
            }
        }
        const int ans = mn != INT_MAX ? mn : -1;
        return ans;
    }
};