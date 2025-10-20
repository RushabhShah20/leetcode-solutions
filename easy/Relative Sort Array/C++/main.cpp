// Problem: Relative Sort Array
// Link to the problem: https://leetcode.com/problems/relative-sort-array/
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        map<int, int> m;
        for (int a : arr1)
        {
            m[a]++;
        }
        vector<int> ans;
        for (int i = 0; i < arr2.size(); i++)
        {
            for (int j = 0; j < m[arr2[i]]; j++)
            {
                ans.push_back(arr2[i]);
            }
            m.erase(arr2[i]);
        }
        for (pair<int, int> i : m)
        {
            for (int j = 0; j < i.second; j++)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};