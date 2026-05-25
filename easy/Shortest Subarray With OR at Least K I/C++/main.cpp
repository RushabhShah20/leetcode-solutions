// Problem: Shortest Subarray With OR at Least K I
// Link to the problem: https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-i/
class Solution
{
public:
    int minimumSubarrayLength(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int ans = n + 1;
        for (int i = 0; i < n; i++)
        {
            int x = 0, y = 0;
            for (int j = i; j < n; j++)
            {
                x |= nums[j];
                y++;
                if (x >= k)
                {
                    ans = min(ans, y);
                }
            }
        }
        ans = ans == n + 1 ? -1 : ans;
        return ans;
    }
};