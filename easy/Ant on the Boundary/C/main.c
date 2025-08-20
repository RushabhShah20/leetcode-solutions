// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
int returnToBoundaryCount(int *nums, int numsSize)
{
    int ans = 0, count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        count += nums[i];
        if (count == 0)
        {
            ans++;
        }
    }
    return ans;
}