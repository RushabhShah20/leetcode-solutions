// Problem: Maximum Erasure Value
// Link to the problem: https://leetcode.com/problems/maximum-erasure-value/
class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_set<int> s;
        int ans = 0, sum = 0, i = 0;
        for (int j = 0; j < n; j++)
        {
            while (s.find(nums[j]) != s.end())
            {
                s.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            sum += nums[j];
            s.insert(nums[j]);
            ans = max(ans, sum);
        }
        return ans;
    }
};