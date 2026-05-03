// Problem: Count Indices With Opposite Parity
// Link to the problem: https://leetcode.com/problems/count-indices-with-opposite-parity/
class Solution
{
public:
    vector<int> countOppositeParity(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n, 0);
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] & 1)
            {
                y++;
            }
            else
            {
                x++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] & 1)
            {
                y--;
            }
            else
            {
                x--;
            }
            if (nums[i] & 1)
            {
                ans[i] = x;
            }
            else
            {
                ans[i] = y;
            }
        }
        return ans;
    }
};