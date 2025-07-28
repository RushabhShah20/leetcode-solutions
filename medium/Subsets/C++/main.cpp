// Problem: Subsets
// Link to the problem: https://leetcode.com/problems/subsets/
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> subsets;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (1 << nums.size()); i++)
        {
            vector<int> subset;
            for (int j = 0; j < nums.size(); j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    subset.push_back(nums[j]);
                }
            }
            subsets.push_back(subset);
        }
        sort(subsets.begin(), subsets.end());
        return subsets;
    }
};