// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
public class Solution
{
    public bool UniformArray(int[] nums1)
    {
        int n = nums1.Length;
        bool x = true;
        int mn = 1000000001;
        for (int i = 0; i < n; i++)
        {
            int num = nums1[i];
            if ((num & 1) == 1)
            {
                x = false;
            }
            mn = Math.Min(mn, num);
        }
        bool ans = (mn & 1) == 1 || x ? true : false;
        return ans;
    }
}