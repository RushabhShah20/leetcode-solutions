// Problem: Limit Occurrences in Sorted Array
// Link to the problem: https://leetcode.com/problems/limit-occurrences-in-sorted-array/
class Solution
{
public:
    vector<int> limitOccurrences(vector<int> &nums, int k)
    {
        const int n = nums.size();
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        vector<int> ans;
        for (const pair<int, int> i : m)
        {
            for (int j = 0; j < min(i.second, k); j++)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};