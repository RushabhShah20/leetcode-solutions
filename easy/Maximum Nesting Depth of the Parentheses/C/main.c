// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
int maxDepth(char *s)
{
    const int n = strlen(s);
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            x++;
        }
        if (s[i] == ')')
        {
            x--;
        }
        ans = fmax(ans, x);
    }
    return ans;
}