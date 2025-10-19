// Problem: Longest Balanced Subarray I
// Link to the problem: https://leetcode.com/problems/longest-balanced-subarray-i/
class Solution
{
public:
    int longestBalanced(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            map<int, int> even, odd;
            for (int j = i; j < n; j++)
            {
                if (nums[j] % 2 == 0)
                {
                    even[nums[j]]++;
                }
                else
                {
                    odd[nums[j]]++;
                }
                if (even.size() == odd.size())
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};