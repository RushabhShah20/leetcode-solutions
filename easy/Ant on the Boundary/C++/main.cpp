// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
class Solution
{
public:
    int returnToBoundaryCount(vector<int> &nums)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count += nums[i];
            if (count == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};