// Problem: Rank Transform of an Array
// Link to the problem: https://leetcode.com/problems/rank-transform-of-an-array/
class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        const int n = arr.size();
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]].push_back(i);
        }
        int k = 1;
        for (const pair<int, vector<int>> i : m)
        {
            for (const int j : i.second)
            {
                arr[j] = k;
            }
            k++;
        }
        return arr;
    }
};