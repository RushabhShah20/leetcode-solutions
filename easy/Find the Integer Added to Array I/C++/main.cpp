// Problem: Find the Integer Added to Array I
// Link to the problem: https://leetcode.com/problems/find-the-integer-added-to-array-i/
class Solution
{
public:
    int addedInteger(vector<int> &nums1, vector<int> &nums2)
    {
        int x = *min_element(nums1.begin(), nums1.end()), y = *min_element(nums2.begin(), nums2.end());
        return y - x;
    }
};