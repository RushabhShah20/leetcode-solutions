// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
class Solution
{
public:
    int maxIncreasingSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        int prevK = 1;
        int k = 1;
        int res = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] > nums[i])
                k++;
            else
            {
                prevK = k;
                k = 1;
            }
            res = max(res, min(prevK, k));
            res = max(res, k / 2);
        }
        return res;
    }
};