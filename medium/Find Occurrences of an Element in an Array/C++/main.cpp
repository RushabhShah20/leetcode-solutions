// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
class Solution
{
public:
    vector<int> occurrencesOfElement(vector<int> &nums, vector<int> &queries, int x)
    {
        vector<int> ans(queries.size(), -1);
        vector<int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == x)
            {
                freq.push_back(i);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (queries[i] <= freq.size())
            {
                ans[i] = freq[queries[i] - 1];
            }
        }
        return ans;
    }
};