// Problem: Maximum Frequency of an Element After Performing Operations I
// Link to the problem: https://leetcode.com/problems/maximum-frequency-of-an-element-after-performing-operations-i/
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k, int numOperations)
    {
        int n = nums.size(), ans = 0;
        int x = *max_element(nums.begin(), nums.end()) + k + 2;
        vector<int> count(x);
        for (int num : nums)
        {
            count[num]++;
        }
        for (int i = 1; i < x; i++)
        {
            count[i] += count[i - 1];
        }
        for (int i = 0; i < x; i++)
        {
            int l = max(0, i - k), r = min(x - 1, i + k), total = count[r] - (l ? count[l - 1] : 0);
            int freq = count[i] - (i ? count[i - 1] : 0);
            ans = max(ans, freq + min(numOperations, total - freq));
        }
        return ans;
    }
};