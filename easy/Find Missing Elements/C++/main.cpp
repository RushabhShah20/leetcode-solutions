// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = *s.begin(); i <= *s.rbegin(); i++)
        {
            if (s.find(i) == s.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};