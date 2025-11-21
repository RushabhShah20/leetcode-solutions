// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
int findLUSlength(char *a, char *b)
{
    if (strcmp(a, b) == 0)
    {
        return -1;
    }
    else
    {
        return fmax(strlen(a), strlen(b));
    }
}