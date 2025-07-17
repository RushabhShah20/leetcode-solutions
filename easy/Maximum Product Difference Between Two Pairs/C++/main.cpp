// Problem: Maximum Product Difference Between Two Pairs
// Link to the problem: https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int a = *max_element(nums.begin(), nums.end());
        nums.erase(max_element(nums.begin(), nums.end()));
        int b = *max_element(nums.begin(), nums.end());
        nums.erase(max_element(nums.begin(), nums.end()));
        int c = *min_element(nums.begin(), nums.end());
        nums.erase(min_element(nums.begin(), nums.end()));
        int d = *min_element(nums.begin(), nums.end());
        return (a * b) - (c * d);
    }
};