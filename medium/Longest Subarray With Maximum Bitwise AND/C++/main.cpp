// Problem: Longest Subarray With Maximum Bitwise AND
// Link to the problem: https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int ans = 0, x = *max_element(nums.begin(), nums.end()), count = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                if (nums[i] == x)
                {
                    count++;
                    ans = max(count, ans);
                }
            }
            else
            {
                count = 1;
            }
        }
        ans = max(count, ans);
        return ans;
    }
};