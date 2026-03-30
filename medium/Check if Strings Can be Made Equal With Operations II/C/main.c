// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
bool checkStrings(char *s1, char *s2)
{
    const int n = strlen(s1);
    int x[52];
    int y[52];
    for (int i = 0; i < 52; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i < 52; i++)
    {
        y[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x[s1[i] - 'a']++;
            y[s2[i] - 'a']++;
        }
        else
        {
            x[s1[i] - 'a' + 26]++;
            y[s2[i] - 'a' + 26]++;
        }
    }
    for (int i = 0; i < 52; i++)
    {
        if (x[i] != y[i])
        {
            return false;
        }
    }
    return true;
}