// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
int minFlips(char *target)
{
    int ans = 0;
    bool x = false;
    if (target[0] == '1')
    {
        ans++;
        x = true;
    }
    for (int i = 1; i < strlen(target); i++)
    {
        if (target[i] == '1')
        {
            if (x == false)
            {
                ans++;
                x = true;
            }
        }
        else
        {
            if (x == true)
            {
                ans++;
                x = false;
            }
        }
    }
    return ans;
}