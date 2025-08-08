// Problem: Reordered Power of 2
// Link to the problem: https://leetcode.com/problems/reordered-power-of-2/
class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        vector<map<char, int>> a;
        for (int i = 0; i <= 29; i++)
        {
            int b = pow(2, i);
            string t = to_string(b);
            map<char, int> y;
            for (int j = 0; j < t.size(); j++)
            {
                y[t[j]]++;
            }
            a.push_back(y);
        }
        string s = to_string(n);
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        if (find(a.begin(), a.end(), x) != a.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};