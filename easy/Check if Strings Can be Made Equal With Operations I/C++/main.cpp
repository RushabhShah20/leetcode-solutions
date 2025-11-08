// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
class Solution
{
public:
    bool canBeEqual(string s1, string s2)
    {
        string a, b, c, d;
        for (int i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
            {
                a.append(1, s1[i]);
                c.append(1, s2[i]);
            }
            else
            {
                b.append(1, s1[i]);
                d.append(1, s2[i]);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        return ((a == c) && (b == d));
    }
};