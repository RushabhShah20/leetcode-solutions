// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
int minLengthAfterRemovals(char *s)
{
    int ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        ans += s[i] == 'a' ? 1 : -1;
    }
    return abs(ans);
}