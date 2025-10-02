// Problem: Intersection of Two Arrays II
// Link to the problem: https://leetcode.com/problems/intersection-of-two-arrays-ii/
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> x, y;
        for (int num : nums1)
        {
            x[num]++;
        }
        for (int num : nums2)
        {
            y[num]++;
        }
        vector<int> ans;
        for (pair<int, int> i : x)
        {
            for (pair<int, int> j : y)
            {
                if (i.first == j.first)
                {
                    for (int k = 0; k < min(i.second, j.second); k++)
                    {
                        ans.push_back(i.first);
                    }
                }
            }
        }
        return ans;
    }
};