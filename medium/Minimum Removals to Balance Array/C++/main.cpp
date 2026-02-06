// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
class Solution
{
public:
    int minRemoval(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int i = 0, ans = 0;
        sort(nums.begin(), nums.end());
        for (int j = 0; j < n; j++)
        {
            while ((long long)nums[j] > (long long)nums[i] * k)
            {
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        ans = n - ans;
        return ans;
    }
};