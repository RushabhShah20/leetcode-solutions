// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static void dfs(int u, const int *adjHead, const int *adjNext, const char *s, int *parent, int *b)
{
    const int c = s[u] - 'a';
    const int w = b[c];
    if (u > 0 && w != -1)
    {
        parent[u] = w;
    }
    b[c] = u;
    for (int v = adjHead[u]; v != -1; v = adjNext[v])
    {
        dfs(v, adjHead, adjNext, s, parent, b);
    }
    b[c] = w;
}

static int calc(int u, const int *treeHead, const int *treeNext, int *ans)
{
    ans[u] = 1;
    for (int v = treeHead[u]; v != -1; v = treeNext[v])
    {
        ans[u] += calc(v, treeHead, treeNext, ans);
    }
    return ans[u];
}

int *findSubtreeSizes(int *parent, int parentSize, char *s, int *returnSize)
{
    const int n = parentSize;
    int *adjHead = (int *)malloc(n * sizeof(int));
    int *adjNext = (int *)malloc(n * sizeof(int));
    int *treeHead = (int *)malloc(n * sizeof(int));
    int *treeNext = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        adjHead[i] = -1;
        adjNext[i] = -1;
        treeHead[i] = -1;
        treeNext[i] = -1;
    }
    for (int i = 1; i < n; i++)
    {
        adjNext[i] = adjHead[parent[i]];
        adjHead[parent[i]] = i;
    }
    int b[26];
    for (int i = 0; i < 26; i++)
    {
        b[i] = -1;
    }
    dfs(0, adjHead, adjNext, s, parent, b);
    for (int i = 1; i < n; i++)
    {
        treeNext[i] = treeHead[parent[i]];
        treeHead[parent[i]] = i;
    }
    int *ans = (int *)calloc(n, sizeof(int));
    calc(0, treeHead, treeNext, ans);
    free(adjHead);
    free(adjNext);
    free(treeHead);
    free(treeNext);
    *returnSize = n;
    return ans;
}