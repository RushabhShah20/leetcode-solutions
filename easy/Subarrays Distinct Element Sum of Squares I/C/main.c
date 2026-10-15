// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
int sumCounts(int *nums, int numsSize)
{
    const int n = numsSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a[101] = {0};
        int x = 0;
        for (int j = i; j < n; j++)
        {
            if (a[nums[j]] == 0)
            {
                a[nums[j]] = 1;
                x++;
            }
            ans += x * x;
        }
    }
    return ans;
}