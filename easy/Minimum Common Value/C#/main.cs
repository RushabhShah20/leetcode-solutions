// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
public class Solution
{
    public int GetCommon(int[] nums1, int[] nums2)
    {
        int m = nums1.Length, n = nums2.Length;
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] > nums2[j])
            {
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                return nums1[i];
            }
        }
        return -1;
    }
}