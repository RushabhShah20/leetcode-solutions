// Problem: Minimum Deletions to Make Array Sharp
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-sharp/
class Solution
{
public:
    int minDeletions(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ans++;
            }
        }
        return ans;
    }
};