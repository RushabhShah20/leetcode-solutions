// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
class Solution
{
public:
    long long maxTotalValue(vector<int> &nums, int k)
    {
        long long ans = 0;
        int maxElement = *max_element(nums.begin(), nums.end()), minElement = *min_element(nums.begin(), nums.end());
        ans = ((long long)(k) * (long long)(maxElement - minElement));
        return ans;
    }
};