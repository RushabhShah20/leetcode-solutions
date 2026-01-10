// Problem: Number of Subarrays with Bounded Maximum
// Link to the problem: https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/
class Solution
{
public:
    int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
    {
        int ans = 0, count = 0;
        for (const int &num : nums)
        {
            if (num <= right)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            ans += count;
        }
        count = 0;
        for (const int &num : nums)
        {
            if (num < left)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            ans -= count;
        }
        return ans;
    }
};