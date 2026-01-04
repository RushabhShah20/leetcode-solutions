// Problem: Minimum Subarray Length With Distinct Sum At Least K
// Link to the problem: https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k/
class Solution
{
public:
    int minLength(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int i = 0, ans = n + 1;
        long long sum = 0;
        unordered_map<int, int> m;
        for (int j = 0; j < n; j++)
        {
            if (m[nums[j]] == 0)
            {
                sum += nums[j];
            }
            m[nums[j]]++;
            while (sum >= k)
            {
                ans = min(ans, j - i + 1);
                m[nums[i]]--;
                if (m[nums[i]] == 0)
                {
                    sum -= nums[i];
                }
                i++;
            }
        }
        if (ans == n + 1)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};