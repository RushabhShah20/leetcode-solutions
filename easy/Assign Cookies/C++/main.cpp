// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, ans = 0, n = g.size(), m = s.size();
        while (j < m && i < n)
        {
            if (g[i] <= s[j])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};