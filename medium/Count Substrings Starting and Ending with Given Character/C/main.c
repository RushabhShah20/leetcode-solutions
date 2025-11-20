// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
long long countSubstrings(char *s, char c)
{
    long long m = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            m++;
        }
    }
    long long ans = (m * (m + 1)) / 2;
    return ans;
}