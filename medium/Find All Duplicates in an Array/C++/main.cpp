// Problem: Find All Duplicates in an Array
// Link to the problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (i.second == 2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};