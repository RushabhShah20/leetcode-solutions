// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
int xorAllNums(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int m = nums1Size, n = nums2Size;
    if (m % 2 == 0)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < m; i++)
            {
                ans ^= nums1[i];
            }
            return ans;
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans ^= nums2[i];
            }
            return ans;
        }
        else
        {
            int x = 0, y = 0;
            for (int i = 0; i < m; i++)
            {
                x ^= nums1[i];
            }
            for (int i = 0; i < n; i++)
            {
                y ^= nums2[i];
            }
            int ans = x ^ y;
            return ans;
        }
    }
}