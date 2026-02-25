// Problem: Sort Integers by The Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
class Solution
{
public:
    int setBits(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            n &= (n - 1);
            ans++;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        vector<int> ans;
        map<int, vector<int>> m;
        for (const int a : arr)
        {
            const int x = setBits(a);
            m[x].push_back(a);
        }
        for (pair<const int, vector<int>> &i : m)
        {
            sort(i.second.begin(), i.second.end());
        }
        for (const pair<int, vector<int>> i : m)
        {
            for (int j : i.second)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};