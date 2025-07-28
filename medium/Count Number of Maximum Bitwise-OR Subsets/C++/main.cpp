// Problem: Count Number of Maximum Bitwise-OR Subsets
// Link to the problem: https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/
class Solution
{
public:
    int countMaxOrSubsets(vector<int> &nums)
    {
        int maxOr = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            maxOr |= nums[i];
        }
        int ans = 0;
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
        subsets.erase(subsets.begin());
        for (int i = 0; i < subsets.size(); i++)
        {
            int tempOr = subsets[i][0];
            for (int j = 0; j < subsets[i].size(); j++)
            {
                tempOr |= subsets[i][j];
            }
            if (tempOr == maxOr)
            {
                ans++;
            }
        }
        return ans;
    }
};