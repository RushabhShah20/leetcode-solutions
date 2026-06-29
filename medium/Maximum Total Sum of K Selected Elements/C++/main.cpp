// Problem: Maximum Total Sum of K Selected Elements
// Link to the problem: https://leetcode.com/problems/maximum-total-sum-of-k-selected-elements/
class Solution
{
public:
    long long maxSum(vector<int> &nums, int k, int mul)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end(), greater<>());
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += (long long)nums[i] * max(1, mul);
            mul--;
        }
        return ans;
    }
};