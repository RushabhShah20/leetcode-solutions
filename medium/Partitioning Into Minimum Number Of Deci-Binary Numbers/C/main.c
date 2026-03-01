// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
int minPartitions(char *n)
{
    int ans = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        ans = fmax(ans, n[i] - '0');
    }
    return ans;
}