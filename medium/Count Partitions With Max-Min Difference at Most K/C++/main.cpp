// Problem: Count Partitions With Max-Min Difference at Most K
// Link to the problem: https://leetcode.com/problems/count-partitions-with-max-min-difference-at-most-k/
class Solution
{
public:
    int countPartitions(vector<int> &nums, int k)
    {
        int n = nums.size();
        long long mod = 1e9 + 7;
        vector<long long> dp(n + 1), prefix(n + 1);
        deque<long long> minQ, maxQ;
        dp[0] = 1;
        prefix[0] = 1;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while (!maxQ.empty() && nums[maxQ.back()] <= nums[i])
            {
                maxQ.pop_back();
            }
            maxQ.push_back(i);
            while (!minQ.empty() && nums[minQ.back()] >= nums[i])
            {
                minQ.pop_back();
            }
            minQ.push_back(i);
            while ((!maxQ.empty()) && (!minQ.empty()) && (nums[maxQ.front()] - nums[minQ.front()] > k))
            {
                if (maxQ.front() == j)
                {
                    maxQ.pop_front();
                }
                if (minQ.front() == j)
                {
                    minQ.pop_front();
                }
                j++;
            }
            long long x = (long long)(prefix[i]) - ((j > 0) ? (prefix[j - 1]) : (0));
            dp[i + 1] = ((x % mod + mod) % mod);
            prefix[i + 1] = ((prefix[i] + dp[i + 1]) % mod);
        }
        return dp[n];
    }
};