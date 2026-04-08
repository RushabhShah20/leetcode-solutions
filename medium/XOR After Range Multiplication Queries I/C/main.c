// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
int xorAfterQueries(int *nums, int numsSize, int **queries, int queriesSize, int *queriesColSize)
{
    const int mod = 1000000007;
    for (int i = 0; i < queriesSize; i++)
    {
        for (int j = queries[i][0]; j <= queries[i][1]; j += queries[i][2])
        {
            nums[j] = (int)(((long long)nums[j] * (long long)queries[i][3]) % mod);
        }
    }
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}