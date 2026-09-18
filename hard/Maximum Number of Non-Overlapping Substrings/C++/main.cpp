// Problem: Maximum Number of Non-Overlapping Substrings
// Link to the problem: https://leetcode.com/problems/maximum-number-of-non-overlapping-substrings/
class Solution
{
public:
    vector<string> maxNumOfSubstrings(string s)
    {
        vector<int> b(26, -1), c(26, -1);
        const int n = s.size();
        for (int i = 0; i < n; i++)
        {
            const int x = s[i] - 'a';
            if (b[x] == -1)
            {
                b[x] = c[x] = i;
            }
            else
            {
                c[x] = i;
            }
        }
        vector<pair<int, int>> a(26, pair<int, int>(-1, -1));
        for (int i = 0; i < 26; i++)
        {
            if (b[i] != -1)
            {
                int l = b[i], r = c[i];
                bool z = true;
                for (int j = l; j <= r; j++)
                {
                    const int y = s[j] - 'a';
                    if (b[y] < l)
                    {
                        z = false;
                        break;
                    }
                    r = max(r, c[y]);
                }
                if (z)
                {
                    a[i] = {l, r};
                }
            }
        }
        sort(a.begin(), a.end(), [](const pair<int, int> &x, const pair<int, int> &y)
             {if(x.second!=y.second){return x.second<y.second;}return x.first>y.first; });
        const int m = a.size();
        vector<string> ans;
        int k = -1;
        for (int i = 0; i < m; i++)
        {
            const int l = a[i].first, r = a[i].second;
            if (l == -1)
            {
                continue;
            }
            if (k == -1 || l > k)
            {
                k = r;
                ans.push_back(s.substr(l, r - l + 1));
            }
        }
        return ans;
    }
};