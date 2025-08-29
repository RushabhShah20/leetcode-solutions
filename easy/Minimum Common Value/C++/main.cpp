// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0, m = nums1.size(), n = nums2.size();
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
};