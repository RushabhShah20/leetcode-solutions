// Problem: Armstrong Number
// Link to the problem: https://leetcode.com/problems/armstrong-number/
class Solution
{
public:
    bool isArmstrong(int n)
    {
        string s = to_string(n);
        const int k = s.size();
        int m = 0;
        for (int i = 0; i < k; i++)
        {
            m += pow(s[i] - '0', k);
        }
        const bool ans = m == n;
        return ans;
    }
};