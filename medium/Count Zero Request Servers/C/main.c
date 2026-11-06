// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct
{
    int first;
    int second;
} Pair;
static int compareLogs(const void *p, const void *q)
{
    const int *rowP = *(const int *const *)p;
    const int *rowQ = *(const int *const *)q;
    return (rowP[1] > rowQ[1]) - (rowP[1] < rowQ[1]);
}
static int comparePairs(const void *p, const void *q)
{
    const Pair *pairP = (const Pair *)p;
    const Pair *pairQ = (const Pair *)q;
    if (pairP->first != pairQ->first)
    {
        return (pairP->first > pairQ->first) - (pairP->first < pairQ->first);
    }
    return (pairP->second > pairQ->second) - (pairP->second < pairQ->second);
}
int *countServers(int n, int **logs, int logsSize, int *logsColSize, int x, int *queries, int queriesSize, int *returnSize)
{
    const int m = queriesSize, k = logsSize;
    qsort(logs, (size_t)k, sizeof(int *), compareLogs);
    Pair *a = (Pair *)malloc((size_t)m * sizeof(Pair));
    for (int i = 0; i < m; i++)
    {
        a[i].first = queries[i];
        a[i].second = i;
    }
    qsort(a, (size_t)m, sizeof(Pair), comparePairs);
    int *ans = (int *)calloc((size_t)m, sizeof(int));
    int *b = (int *)calloc((size_t)(n + 1), sizeof(int));
    int l = 0, r = 0, y = 0;
    for (int i = 0; i < m; i++)
    {
        while (r < k && logs[r][1] <= a[i].first)
        {
            const int c = logs[r][0];
            r++;
            b[c]++;
            if (b[c] == 1)
            {
                y++;
            }
        }
        while (l < r && logs[l][1] < a[i].first - x)
        {
            const int c = logs[l][0];
            l++;
            b[c]--;
            if (b[c] == 0)
            {
                y--;
            }
        }
        ans[a[i].second] = n - y;
    }
    free(a);
    free(b);
    *returnSize = m;
    return ans;
}