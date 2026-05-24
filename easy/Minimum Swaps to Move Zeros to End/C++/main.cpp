// Problem: Minimum Swaps to Move Zeros to End
// Link to the problem: https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/
class Solution
{
public:
    int minimumSwaps(vector<int> &nums)
    {
        const int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                x++;
            }
        }
        int ans = 0;
        for (int i = n - 1; i >= n - x; i--)
        {
            if (nums[i] != 0)
            {
                ans++;
            }
        }
        return ans;
    }
};