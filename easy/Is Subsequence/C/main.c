// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
bool isSubsequence(char *s, char *t)
{
    int n = strlen(t), m = strlen(s), i, j;
    for (i = 0, j = 0; i < n && j < m; i++)
    {
        if (t[i] == s[j])
        {
            j++;
        }
    }
    if (j < m)
    {
        return false;
    }
    else
    {
        return true;
    }
}