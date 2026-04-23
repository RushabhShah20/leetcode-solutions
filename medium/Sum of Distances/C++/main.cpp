// Problem: Sum of Distances
// Link to the problem: https://leetcode.com/problems/sum-of-distances/
class Solution
{
public:
    vector<long long> distance(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_map<int, vector<long long>> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]].push_back(i);
        }
        vector<long long> ans(n, 0);
        for (const pair<int, vector<long long>> i : m)
        {
            long long x = 0;
            for (const long long j : i.second)
            {
                x += j;
            }
            long long y = 0;
            const long long z = i.second.size();
            for (long long j = 0; j < z; j++)
            {
                const long long k = i.second[j];
                ans[k] = x - y * 2 + k * (2 * j - z);
                y += k;
            }
        }
        return ans;
    }
};