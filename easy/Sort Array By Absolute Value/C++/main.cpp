// Problem: Sort Array By Absolute Value
// Link to the problem: https://leetcode.com/problems/sort-array-by-absolute-value/
class Solution
{
public:
    vector<int> sortByAbsoluteValue(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b)
             { return abs(a) < abs(b); });
        return nums;
    }
};