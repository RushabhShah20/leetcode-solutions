// Problem: The Two Sneaky Numbers of Digitville
// Link to the problem: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        set<int> ans_set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m[nums[i]] == 2)
            {
                ans_set.insert(nums[i]);
            }
        }
        vector<int> ans(ans_set.begin(), ans_set.end());
        return ans;
    }
};