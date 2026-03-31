// Problem: Lexicographically Smallest Generated String
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-generated-string/
class Solution
{
public:
    string generateString(string str1, string str2)
    {
        const int n = str1.length(), m = str2.length();
        string ans(n + m - 1, 'a');
        vector<bool> a(n + m - 1, false);
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'T')
            {
                for (int j = 0; j < m; j++)
                {
                    const int k = i + j;
                    if (a[k] && ans[k] != str2[j])
                    {
                        return "";
                    }
                    ans[k] = str2[j];
                    a[k] = true;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'F')
            {
                bool x = false;
                for (int j = 0; j < m; j++)
                {
                    if (ans[i + j] != str2[j])
                    {
                        x = true;
                        break;
                    }
                }
                if (x)
                {
                    continue;
                }
                bool y = false;
                for (int j = m - 1; j >= 0; j--)
                {
                    const int k = i + j;
                    if (!a[k])
                    {
                        ans[k] = 'b';
                        y = true;
                        break;
                    }
                }
                if (!y)
                {
                    return "";
                }
            }
        }
        return ans;
    }
};