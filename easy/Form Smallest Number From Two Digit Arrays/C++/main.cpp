// Problem: Form Smallest Number From Two Digit Arrays
// Link to the problem: https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/
class Solution
{
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> common;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
            {
                common.insert(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end())
            {
                common.insert(nums2[i]);
            }
        }
        if (common.size() != 0)
        {
            return *common.begin();
        }
        else
        {
            return (10 * min(*min_element(nums1.begin(), nums1.end()), *min_element(nums2.begin(), nums2.end()))) + (max(*min_element(nums1.begin(), nums1.end()), *min_element(nums2.begin(), nums2.end())));
        }
    }
};