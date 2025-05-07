// Problem: Majority Element II
// Link to the problem: https://leetcode.com/problems/majority-element-ii/
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (i.second * 3 > nums.size())
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};