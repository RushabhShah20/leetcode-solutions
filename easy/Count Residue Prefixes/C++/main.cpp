// Problem: Count Residue Prefixes
// Link to the problem: https://leetcode.com/problems/count-residue-prefixes/
class Solution
{
public:
    int residuePrefixes(string s)
    {
        const int n = s.size();
        unordered_set<char> t;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            t.insert(s[i]);
            if (t.size() == ((i + 1) % 3))
            {
                ans++;
            }
        }
        return ans;
    }
};