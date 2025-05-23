// Problem: Permutations
// Link to the problem: https://leetcode.com/problems/permutations/
class Solution
{
public:
    void backTrack(vector<int> &nums, vector<bool> &used, vector<int> &sub, vector<vector<int>> &ans)
    {
        if (sub.size() == nums.size())
        {
            ans.push_back(sub);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i])
            {
                continue;
            }
            used[i] = true;
            sub.push_back(nums[i]);
            backTrack(nums, used, sub, ans);
            sub.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> sub;
        vector<bool> used(nums.size(), false);
        backTrack(nums, used, sub, ans);
        return ans;
    }
};