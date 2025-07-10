// Problem: Intersection of Two Arrays
// Link to the problem: https://leetcode.com/problems/intersection-of-two-arrays/
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
            {
                s.insert(nums1[i]);
            }
        }
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};