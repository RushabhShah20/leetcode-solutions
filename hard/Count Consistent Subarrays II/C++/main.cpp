// Problem: Count Consistent Subarrays II
// Link to the problem: https://leetcode.com/problems/count-consistent-subarrays-ii/
class Solution
{
public:
    long long countConsistent(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> x(n, -1), y;
        for (int i = 0; i < n; i++)
        {
            while (!y.empty() && (nums[y.back()] & nums[i]) == nums[i] && nums[i] < nums[y.back()])
            {
                y.pop_back();
            }
            if (!y.empty())
            {
                x[i] = y.back();
            }
            y.push_back(i);
        }
        long long ans = 0;
        y.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!y.empty() && (nums[y.back()] & nums[i]) == nums[i])
            {
                y.pop_back();
            }
            const int z = y.empty() ? n : y.back();
            ans += 1LL * (i - x[i]) * (z - i);
            y.push_back(i);
        }
        return ans;
    }
};