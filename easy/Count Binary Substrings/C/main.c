// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
int countBinarySubstrings(char *s)
{
    const int n = strlen(s);
    int ans = 0, prev = 0, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            ans += fmin(prev, curr);
            prev = curr;
            curr = 1;
        }
        else
        {
            curr++;
        }
    }
    ans += fmin(prev, curr);
    return ans;
}