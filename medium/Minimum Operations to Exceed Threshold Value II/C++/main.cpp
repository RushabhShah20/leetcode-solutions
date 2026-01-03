// Problem: Minimum Operations to Exceed Threshold Value II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int ans = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        while (pq.size() >= 2 && pq.top() < k)
        {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            long long z = (min(x, y) * 2) + max(x, y);
            pq.push(z);
            ans++;
        }
        return ans;
    }
};