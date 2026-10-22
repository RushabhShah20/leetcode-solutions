// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
public class Solution
{
    public int MinOperations(int[] nums)
    {
        int n = nums.Length;
        if (n == 1)
        {
            return 0;
        }
        int j = 0;
        while (nums[j] != 0)
        {
            j++;
        }
        bool x = true, y = true;
        for (int i = 1; i < n; i++)
        {
            int z = nums[(i + j) % n];
            if (z != i)
            {
                x = false;
            }
            if (z != n - i)
            {
                y = false;
            }
            if (!x && !y)
            {
                return -1;
            }
        }
        if (x)
        {
            return Math.Min(j, n - j + 2);
        }
        return Math.Min(n - j, j + 2);
    }
}