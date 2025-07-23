// Problem: Divide Array Into Arrays With Max Difference
// Link to the problem: https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/
class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        vector<vector<int>> ans;
        int maxDiff = 0;
        if (nums.size() < 3)
        {
            return ans;
        }
        else
        {
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i += 3)
            {
                int x = abs(nums[i] - nums[i + 1]), y = abs(nums[i + 1] - nums[i + 2]), z = abs(nums[i + 2] - nums[i]);
                maxDiff = max(maxDiff, max({x, y, z}));
            }
            if (maxDiff > k)
            {
                return ans;
            }
            else
            {
                for (int i = 0; i < nums.size(); i += 3)
                {
                    ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
                }
                return ans;
            }
        }
    }
};