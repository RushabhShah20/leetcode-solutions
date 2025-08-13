// Problem: Maximize Sum Of Array After K Negations
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                if (nums[i] < 0)
                {
                    nums[i] = -1 * nums[i];
                    k--;
                }
            }
            else
            {
                break;
            }
        }
        sort(nums.begin(), nums.end());
        if (k > 0)
        {
            for (int i = 0; i < k; i++)
            {
                nums[0] = -1 * nums[0];
            }
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans += nums[i];
        }
        return ans;
    }
};