// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
public class Solution
{
    public int XorAllNums(int[] nums1, int[] nums2)
    {
        int m = nums1.Length, n = nums2.Length;
        if (m % 2 == 0)
        {
            if (n % 2 == 0)
            {
                return 0;
            }
            else
            {
                int ans = 0;
                foreach (int num in nums1)
                {
                    ans ^= num;
                }
                return ans;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                int ans = 0;
                foreach (int num in nums2)
                {
                    ans ^= num;
                }
                return ans;
            }
            else
            {
                int x = 0, y = 0;
                foreach (int num in nums1)
                {
                    x ^= num;
                }
                foreach (int num in nums2)
                {
                    y ^= num;
                }
                int ans = x ^ y;
                return ans;
            }
        }
    }
}