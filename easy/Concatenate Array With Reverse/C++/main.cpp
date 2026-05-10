// Problem: Concatenate Array With Reverse
// Link to the problem: https://leetcode.com/problems/concatenate-array-with-reverse/
class Solution
{
public:
    vector<int> concatWithReverse(vector<int> &nums)
    {
        vector<int> ans;
        ans.insert(ans.end(), nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};