// Problem: Intersection of Multiple Arrays
// Link to the problem: https://leetcode.com/problems/intersection-of-multiple-arrays/
class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        vector<int> freq(1000, 0), ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                freq[nums[i][j] - 1]++;
            }
        }
        for (int i = 0; i < 1000; i++)
        {
            if (freq[i] == (nums.size()))
            {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};