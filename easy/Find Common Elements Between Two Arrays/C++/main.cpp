// Problem: Find Common Elements Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-common-elements-between-two-arrays/
class Solution
{
public:
    vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(2, 0);
        for (int i = 0; i < nums2.size(); i++)
        {
            for (int j = 0; j < nums1.size(); j++)
            {
                if (nums1[j] == nums2[i])
                {
                    ans[1]++;
                    break;
                }
            }
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums2[j] == nums1[i])
                {
                    ans[0]++;
                    break;
                }
            }
        }
        return ans;
    }
};