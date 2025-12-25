// Problem: Maximum Bags With Full Capacity of Rocks
// Link to the problem: https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/
class Solution
{
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
    {
        int n = rocks.size();
        vector<int> nums(n, 0);
        for (int i = 0; i < n; i++)
        {
            nums[i] = capacity[i] - rocks[i];
        }
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (const int &num : nums)
        {
            if (num == 0)
            {
                ans++;
            }
            else
            {
                if (additionalRocks >= num)
                {
                    additionalRocks -= num;
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};