// Problem: Kth Largest Element in an Array
// Link to the problem: https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1];
    }
};