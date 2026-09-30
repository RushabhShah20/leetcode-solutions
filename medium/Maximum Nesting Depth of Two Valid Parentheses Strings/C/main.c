// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *maxDepthAfterSplit(char *seq, int *returnSize)
{
    const int n = strlen(seq);
    int *ans = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ans[i] = (i & 1) ^ (seq[i] == '(' ? 1 : 0);
    }
    *returnSize = n;
    return ans;
}