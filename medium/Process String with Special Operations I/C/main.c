// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
char *processStr(char *s)
{
    const int n = strlen(s);
    int capacity = n * 2 + 1;
    char *ans = (char *)malloc(capacity * sizeof(char));
    int len = 0;
    ans[0] = '\0';
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == '*')
        {
            if (len > 0)
            {
                len--;
                ans[len] = '\0';
            }
        }
        else if (c == '#')
        {
            int newLen = len * 2;
            if (newLen + 1 > capacity)
            {
                capacity = newLen * 2 + 1;
                ans = (char *)realloc(ans, capacity * sizeof(char));
            }
            memmove(ans + len, ans, len);
            len = newLen;
            ans[len] = '\0';
        }
        else if (c == '%')
        {
            int left = 0, right = len - 1;
            while (left < right)
            {
                char tmp = ans[left];
                ans[left] = ans[right];
                ans[right] = tmp;
                left++;
                right--;
            }
        }
        else
        {
            if (len + 1 >= capacity)
            {
                capacity = capacity * 2 + 1;
                ans = (char *)realloc(ans, capacity * sizeof(char));
            }
            ans[len++] = c;
            ans[len] = '\0';
        }
    }
    return ans;
}