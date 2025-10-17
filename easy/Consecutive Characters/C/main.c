// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
int maxPower(char *s)
{
    int ans = 1, count = 1;
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            ans = fmax(ans, count);
        }
        else
        {
            count = 1;
        }
    }
    return ans;
}