// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
class Solution
{
public:
    bool checkStrings(string s1, string s2)
    {
        int n = s1.size();
        string evens1, odds1, evens2, odds2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                evens1.push_back(s1[i]);
                evens2.push_back(s2[i]);
            }
            else
            {
                odds1.push_back(s1[i]);
                odds2.push_back(s2[i]);
            }
        }
        sort(evens1.begin(), evens1.end());
        sort(evens2.begin(), evens2.end());
        sort(odds1.begin(), odds1.end());
        sort(odds2.begin(), odds2.end());
        if (evens1 == evens2 && odds1 == odds2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};