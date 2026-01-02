// Problem: N-Repeated Element in Size 2N Array
// Link to the problem: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        const int n = nums.size();
        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
            {
                return nums[i];
            }
        }
        return nums[n - 1];
    }
};