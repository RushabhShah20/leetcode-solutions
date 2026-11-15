// Problem: Count Consistent Subarrays I
// Link to the problem: https://leetcode.com/problems/count-consistent-subarrays-i/
class Solution
{
public:
    int countConsistent(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i], y = nums[i];
            for (int j = i; j < n; j++)
            {
                y = min(y, nums[j]);
                x = x & nums[j];
                if (x == y)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};