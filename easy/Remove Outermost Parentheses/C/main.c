// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
char *removeOuterParentheses(char *s)
{
    const int n = strlen(s);
    int x = 0;
    char *ans = (char *)malloc(sizeof(char) * (n + 1));
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == ')')
        {
            x--;
        }
        if (x > 0)
        {
            ans[j] = c;
            j++;
        }
        if (c == '(')
        {
            x++;
        }
    }
    ans[j] = '\0';
    return ans;
}