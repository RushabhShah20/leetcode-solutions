// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
int minimumDeletions(char *s)
{
    const int n = strlen(s);
    int ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            count++;
        }
        else
        {
            ans = fmin(ans + 1, count);
        }
    }
    return ans;
}