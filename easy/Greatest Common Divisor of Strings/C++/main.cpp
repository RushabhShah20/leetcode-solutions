// Problem: Greatest Common Divisor of Strings
// Link to the problem: https://leetcode.com/problems/greatest-common-divisor-of-strings/
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        const int n = str1.size(), m = str2.size();
        if (str1 + str2 == str2 + str1)
        {
            const string ans = str1.substr(0, gcd(m, n));
            return ans;
        }
        else
        {
            return "";
        }
    }
};