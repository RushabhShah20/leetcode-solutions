// Problem: Special Array With X Elements Greater Than or Equal X
// Link to the problem: https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        vector<int> x(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < x.size(); j++)
            {
                if (nums[i] >= j)
                {
                    x[j]++;
                }
            }
        }
        int ans = -1;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == i)
            {
                ans = i;
            }
        }
        return ans;
    }
};