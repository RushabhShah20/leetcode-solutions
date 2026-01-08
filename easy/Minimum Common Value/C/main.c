// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
int getCommon(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    const int m = nums1Size, n = nums2Size;
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