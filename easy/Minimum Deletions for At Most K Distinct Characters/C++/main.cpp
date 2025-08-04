// Problem: Minimum Deletions for At Most K Distinct Characters
// Link to the problem: https://leetcode.com/problems/minimum-deletions-for-at-most-k-distinct-characters/
class Solution
{
public:
    int minDeletion(string s, int k)
    {
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        if (m.size() <= k)
        {
            return 0;
        }
        else
        {
            int n = m.size();
            int t = n - k;
            int ans = 0;
            while (t--)
            {
                int minFreq = INT_MAX;
                for (auto i : m)
                {
                    minFreq = min(minFreq, i.second);
                }
                ans += minFreq;
                for (auto i : m)
                {
                    if (i.second == minFreq)
                    {
                        m.erase(i.first);
                        break;
                    }
                }
            }
            return ans;
        }
    }
};