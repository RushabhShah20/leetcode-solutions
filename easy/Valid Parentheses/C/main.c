// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
bool isValid(char *s)
{
    const int n = strlen(s);
    char *st = (char *)malloc(n);
    if (st == NULL)
    {
        return false;
    }
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st[z] = s[i];
            z++;
        }
        else
        {
            if (z == 0)
            {
                free(st);
                return false;
            }
            const char x = st[z - 1], y = s[i];
            if ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']'))
            {
                z--;
            }
            else
            {
                free(st);
                return false;
            }
        }
    }
    const bool ans = (z == 0);
    free(st);
    return ans;
}