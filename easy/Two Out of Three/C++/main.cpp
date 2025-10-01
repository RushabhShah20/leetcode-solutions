// Problem: Two Out of Three
// Link to the problem: https://leetcode.com/problems/two-out-of-three/
class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end()), s3(nums3.begin(), nums3.end());
        map<int, int> m;
        for (int num : s1)
        {
            m[num]++;
        }
        for (int num : s2)
        {
            m[num]++;
        }
        for (int num : s3)
        {
            m[num]++;
        }
        vector<int> ans;
        for (pair<int, int> i : m)
        {
            if (i.second >= 2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};