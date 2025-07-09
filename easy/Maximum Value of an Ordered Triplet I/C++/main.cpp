// Problem: Maximum Value of an Ordered Triplet I
// Link to the problem: https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/
class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    long long x = nums[i] - nums[j];
                    long long y = nums[k];
                    long long z = x * y;
                    ans = max(ans, z);
                }
            }
        }
        return ans;
    }
};