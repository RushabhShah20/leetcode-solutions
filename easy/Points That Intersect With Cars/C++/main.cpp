// Problem: Points That Intersect With Cars
// Link to the problem: https://leetcode.com/problems/points-that-intersect-with-cars/
class Solution
{
public:
    int numberOfPoints(vector<vector<int>> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums[i][0]; j <= nums[i][1]; j++)
            {
                s.insert(j);
            }
        }
        return s.size();
    }
};