// Problem: Convert an Array Into a 2D Array With Conditions
// Link to the problem: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/
class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int maxFreq = 0;
        for (auto i : m)
        {
            maxFreq = max(maxFreq, i.second);
        }
        vector<vector<int>> ans(maxFreq);
        for (auto i : m)
        {
            for (int j = 0; j < i.second; j++)
            {
                ans[j].push_back(i.first);
            }
        }
        return ans;
    }
};