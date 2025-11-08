// Problem: Isomorphic Strings
// Link to the problem: https://leetcode.com/problems/isomorphic-strings/
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int n = s.size();
        map<char, int> x, y;
        int i = 0;
        for (char c : s)
        {
            if (x[c] == 0)
            {
                x[c] = i;
                i++;
            }
        }
        i = 0;
        for (char c : t)
        {
            if (y[c] == 0)
            {
                y[c] = i;
                i++;
            }
        }
        vector<int> a, b;
        for (char c : s)
        {
            a.push_back(x[c]);
        }
        for (char c : t)
        {
            b.push_back(y[c]);
        }
        return a == b;
    }
};