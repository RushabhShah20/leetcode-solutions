// Problem: Maximum Distance Between a Pair of Values
// Link to the problem: https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/
class Solution
{
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
    {
        const int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0, ans = 0;
        while (i < n && j < m)
        {
            if (nums1[i] <= nums2[j])
            {
                ans = max(ans, j - i);
                j++;
            }
            else
            {
                i++;
                if (i > j)
                {
                    j = i;
                }
            }
        }
        return ans;
    }
};