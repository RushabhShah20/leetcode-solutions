// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
class Solution
{
public:
    long long maxAlternatingSum(vector<int> &nums)
    {
        long long ans = 0;
        sort(nums.begin(), nums.end(), [](const int &a, const int &b)
             { return abs(a) < abs(b); });
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
                ans -= ((long long)(nums[i]) * (long long)(nums[i]));
            }
            else
            {
                ans += ((long long)(nums[i]) * (long long)(nums[i]));
            }
        }
        return ans;
    }
};