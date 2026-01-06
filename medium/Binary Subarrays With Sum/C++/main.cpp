// Problem: Binary Subarrays With Sum
// Link to the problem: https://leetcode.com/problems/binary-subarrays-with-sum/
class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        const int n = nums.size();
        int ans = 0, i = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += nums[j];
            while (sum > goal && i <= j)
            {
                sum -= nums[i];
                i++;
            }
            ans += (j - i + 1);
        }
        i = 0;
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += nums[j];
            while (sum > goal - 1 && i <= j)
            {
                sum -= nums[i];
                i++;
            }
            ans -= (j - i + 1);
        }
        return ans;
    }
};