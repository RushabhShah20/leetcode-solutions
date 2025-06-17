// Problem: Find Triangular Sum of an Array
// Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> newNums(nums.size() - 1);
            for (int j = 0; j < newNums.size(); j++)
            {
                newNums[j] = ((nums[j] + nums[j + 1]) % 10);
            }
            nums = newNums;
        }
        return nums[0];
    }
};