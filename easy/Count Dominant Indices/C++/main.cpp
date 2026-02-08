// Problem: Count Dominant Indices
// Link to the problem: https://leetcode.com/problems/count-dominant-indices/
class Solution
{
public:
    int dominantIndices(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, sum = 0, count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i < n - 1)
            {
                if (nums[i] * count > sum)
                {
                    ans++;
                }
            }
            sum += nums[i];
            count++;
        }
        return ans;
    }
};