// Problem: Minimum Limit of Balls in a Bag
// Link to the problem: https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/
class Solution
{
public:
    int minimumSize(vector<int> &nums, int maxOperations)
    {
        int l = 1, r = *max_element(nums.begin(), nums.end());
        int ans = r;
        while (l <= r)
        {
            int m = (l + r) / 2, o = 0;
            for (const int num : nums)
            {
                o += ((num - 1) / m);
                if (o > maxOperations)
                {
                    break;
                }
            }
            if (o <= maxOperations)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};