// Problem: Median of Two Sorted Arrays
// Link to the problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        if (nums3.size() % 2 == 0)
        {
            return (double)(nums3[(nums3.size() / 2) - 1] + nums3[(nums3.size() / 2)]) / 2;
        }
        else
        {
            return (double)nums3[nums3.size() / 2];
        }
    }
};