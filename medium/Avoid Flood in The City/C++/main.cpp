// Problem: Avoid Flood in The City
// Link to the problem: https://leetcode.com/problems/avoid-flood-in-the-city/
class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        set<int> s;
        int n = rains.size();
        vector<int> ans(n, -1);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (rains[i] == 0)
            {
                s.insert(i);
                ans[i] = 1;
            }
            else
            {
                int x = rains[i];
                if (m.find(x) != m.end())
                {
                    int y = m[x];
                    set<int>::iterator it = s.upper_bound(y);
                    if (it == s.end())
                    {
                        return {};
                    }
                    ans[*it] = x;
                    s.erase(it);
                }
                m[x] = i;
            }
        }
        return ans;
    }
};