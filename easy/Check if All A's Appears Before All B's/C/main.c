// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
bool checkString(char *s)
{
    bool ans = true;
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'b')
        {
            ans = true;
            count = 1;
        }
        if (s[i] == 'a' && count == 1)
        {
            ans = false;
            break;
        }
    }

    return ans;
}