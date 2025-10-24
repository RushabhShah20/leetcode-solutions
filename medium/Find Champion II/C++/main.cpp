// Problem: Find Champion II
// Link to the problem: https://leetcode.com/problems/find-champion-ii/
class Solution
{
public:
    int findChampion(int n, vector<vector<int>> &edges)
    {
        vector<bool> a(n, false);
        for (vector<int> edge : edges)
        {
            a[edge[1]] = true;
        }
        int ans = -1, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == false)
            {
                count++;
                ans = i;
            }
            if (count > 1)
            {
                return -1;
            }
        }
        return ans;
    }
};