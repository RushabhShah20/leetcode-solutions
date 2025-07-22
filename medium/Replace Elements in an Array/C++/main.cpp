// Problem: Replace Elements in an Array
// Link to the problem: https://leetcode.com/problems/replace-elements-in-an-array/
class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }
        for (int i = 0; i < operations.size(); i++)
        {
            int x = m[operations[i][0]];
            nums[x] = operations[i][1];
            m[operations[i][1]] = x;
        }
        return nums;
    }
};