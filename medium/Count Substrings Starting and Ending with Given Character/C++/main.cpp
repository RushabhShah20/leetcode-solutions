// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
class Solution
{
public:
    long long countSubstrings(string s, char c)
    {
        long long m = 0;
        for (char ch : s)
        {
            if (ch == c)
            {
                m++;
            }
        }
        long long ans = (m * (m + 1)) / 2;
        return ans;
    }
};