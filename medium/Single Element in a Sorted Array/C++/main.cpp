// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (i.second == 1)
            {
                ans = i.first;
            }
        }
        return ans;
    }
};