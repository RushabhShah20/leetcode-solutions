// Problem: Final Element After Subarray Deletions
// Link to the problem: https://leetcode.com/problems/final-element-after-subarray-deletions/
class Solution
{
public:
    int finalElement(vector<int> &nums)
    {
        const int ans = max(nums.front(), nums.back());
        return ans;
    }
};