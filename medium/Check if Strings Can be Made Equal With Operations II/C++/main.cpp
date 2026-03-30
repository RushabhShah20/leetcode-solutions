// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
class Solution
{
public:
    bool checkStrings(string s1, string s2)
    {
        const int n = s1.size();
        vector<int> x(52, 0), y(52, 0);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                x[s1[i] - 'a']++;
                y[s2[i] - 'a']++;
            }
            else
            {
                x[s1[i] - 'a' + 26]++;
                y[s2[i] - 'a' + 26]++;
            }
        }
        const bool ans = x == y;
        return ans;
    }
};