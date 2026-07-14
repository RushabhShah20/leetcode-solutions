// Problem: Sum of Digits in the Minimum Number
// Link to the problem: https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/
class Solution
{
public:
    int sumOfDigits(vector<int> &nums)
    {
        const int n = nums.size();
        int mn = 101;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, nums[i]);
        }
        int x = 0;
        while (mn > 0)
        {
            x += mn % 10;
            mn /= 10;
        }
        const int ans = !(x & 1);
        return ans;
    }
};