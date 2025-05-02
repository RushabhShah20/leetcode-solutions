// Problem: Contains Duplicate
// Link to the problem: https://leetcode.com/problems/contains-duplicate/
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        return s.size() != nums.size();
    }
};