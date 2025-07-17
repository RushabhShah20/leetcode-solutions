// Problem: Find the Distinct Difference Array
// Link to the problem: https://leetcode.com/problems/find-the-distinct-difference-array/
class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            set<int> prefix(nums.begin(), nums.begin() + i + 1), suffix(nums.begin() + i + 1, nums.end());
            ans[i] = prefix.size() - suffix.size();
        }
        return ans;
    }
};