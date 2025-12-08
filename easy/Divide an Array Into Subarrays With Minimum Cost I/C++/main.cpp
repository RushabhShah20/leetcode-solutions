// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        sort(nums.begin() + 1, nums.end());
        const int ans = nums[0] + nums[1] + nums[2];
        return ans;
    }
};