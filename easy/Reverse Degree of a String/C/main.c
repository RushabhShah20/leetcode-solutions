// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
int reverseDegree(char *s)
{
    const int n = strlen(s);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (26 - (s[i] - 'a')) * (i + 1);
    }
    return ans;
}