// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
int minimumCost(int *nums, int numsSize)
{
    const int n = numsSize;
    int m1 = 51, m2 = 51;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < m1)
        {
            m2 = m1;
            m1 = nums[i];
        }
        else if (nums[i] < m2)
        {
            m2 = nums[i];
        }
    }
    const int ans = nums[0] + m1 + m2;
    return ans;
}