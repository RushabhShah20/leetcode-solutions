// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
char *findDifferentBinaryString(char **nums, int numsSize)
{
    const int n = numsSize;
    char *ans = (char *)malloc((n + 1) * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i][i] == '0' ? '1' : '0';
    }
    ans[n] = '\0';
    return ans;
}