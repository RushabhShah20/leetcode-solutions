// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
int minDeletionSize(char **strs, int strsSize)
{
    const int n = strsSize, m = strlen(strs[0]);
    int ans = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ((strs[i][j] - 'a') > (strs[i + 1][j] - 'a'))
            {
                ans++;
                break;
            }
        }
    }
    return ans;
}