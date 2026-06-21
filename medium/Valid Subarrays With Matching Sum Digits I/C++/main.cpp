// Problem: Valid Subarrays With Matching Sum Digits I
// Link to the problem: https://leetcode.com/problems/valid-subarrays-with-matching-sum-digits-i/
class Solution
{
public:
    int countValidSubarrays(vector<int> &nums, int x)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long y = 0;
            for (int j = i; j < n; j++)
            {
                y += nums[j];
                long long z = y;
                while (z >= 10)
                {
                    z /= 10;
                }
                if (z == x && y % 10 == x)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
