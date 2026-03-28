// Problem: Find the String with LCP
// Link to the problem: https://leetcode.com/problems/find-the-string-with-lcp/
class Solution
{
public:
    string findTheString(vector<vector<int>> &lcp)
    {
        const int n = lcp.size();
        string ans(n, ' ');
        char curr = 'a';
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == ' ')
            {
                if (curr > 'z')
                {
                    return "";
                }
                ans[i] = curr;
                for (int j = i + 1; j < n; j++)
                {
                    if (lcp[i][j] > 0)
                    {
                        ans[j] = ans[i];
                    }
                }
                curr++;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (ans[i] == ans[j])
                {
                    const int x = i == n - 1 || j == n - 1 ? 1 : lcp[i + 1][j + 1] + 1;
                    if (lcp[i][j] != x)
                    {
                        return "";
                    }
                }
                else
                {
                    if (lcp[i][j] != 0)
                    {
                        return "";
                    }
                }
            }
        }
        return ans;
    }
};