// Problem: Rearrange Spaces Between Words
// Link to the problem: https://leetcode.com/problems/rearrange-spaces-between-words/
class Solution
{
public:
    string reorderSpaces(string text)
    {
        string ans, t;
        vector<string> a;
        const int n = text.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (text[i] == ' ')
            {
                x++;
                if (!t.empty())
                {
                    a.push_back(t);
                    t.clear();
                }
            }
            else
            {
                t += text[i];
            }
        }
        if (!t.empty())
        {
            a.push_back(t);
        }
        if (x == 0)
        {
            return text;
        }
        const int m = a.size();
        if (m == 1)
        {
            ans.append(a[0]);
            ans.append(x, ' ');
            return ans;
        }
        const int y = x / (m - 1), z = x % (m - 1);
        for (int i = 0; i < m - 1; i++)
        {
            ans.append(a[i]);
            ans.append(y, ' ');
        }
        ans.append(a[m - 1]);
        ans.append(z, ' ');
        return ans;
    }
};