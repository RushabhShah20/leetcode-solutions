// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
int countPairs(int *nums, int numsSize, int k)
{
    const int n = numsSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j] && (i * j) % k == 0)
            {
                ans++;
            }
        }
    }
    return ans;
}