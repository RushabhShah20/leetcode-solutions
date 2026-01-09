// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int i = 0, j = 0, ans = 0;
        unordered_map<int, int> m;
        while (j < n)
        {
            m[nums[j]]++;
            while (m[nums[j]] > k && i < n)
            {
                m[nums[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};