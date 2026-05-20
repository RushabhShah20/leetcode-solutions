// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findThePrefixCommonArray(int *A, int ASize, int *B, int BSize, int *returnSize)
{
    const int n = BSize;
    int *m = calloc(n + 1, sizeof(int));
    int *ans = malloc(n * sizeof(int));
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        m[A[i]]++;
        if (m[A[i]] == 2)
        {
            x++;
        }
        m[B[i]]++;
        if (m[B[i]] == 2)
        {
            x++;
        }
        ans[i] = x;
    }
    free(m);
    *returnSize = n;
    return ans;
}