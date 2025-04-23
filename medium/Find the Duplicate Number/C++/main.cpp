// Problem: Find the Duplicate Number
// Link to the problem: https://leetcode.com/problems/find-the-duplicate-number/
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] >= 2)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};