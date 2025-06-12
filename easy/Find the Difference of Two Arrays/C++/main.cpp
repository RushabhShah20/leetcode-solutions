// Problem: Find the Difference of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-difference-of-two-arrays/
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<set<int>> a(2);
        for (int i = 0; i < nums1.size(); i++)
        {
            if (find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end())
            {
                a[0].insert(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end())
            {
                a[1].insert(nums2[i]);
            }
        }
        vector<vector<int>> ans;
        ans.reserve(a.size());
        for (const auto &s : a)
        {
            ans.emplace_back(s.begin(), s.end());
        }
        return ans;
    }
};