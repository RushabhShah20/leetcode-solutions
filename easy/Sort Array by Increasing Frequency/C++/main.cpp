// Problem: Sort Array by Increasing Frequency
// Link to the problem: https://leetcode.com/problems/sort-array-by-increasing-frequency/
class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : m)
        {
            y[i.second].push_back(i.first);
        }
        for (auto &i : y)
        {
            sort(i.second.begin(), i.second.end(), greater<int>());
        }
        for (auto i : y)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                for (int k = 0; k < i.first; k++)
                {
                    ans.push_back(i.second[j]);
                }
            }
        }
        return ans;
    }
};