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
        vector<long long> ans(n, 0), prefix(n, 0), suffix(n, 0);
        for (const pair<int, vector<long long>> i : m)
        {
            const vector<long long> v = i.second;
            for (int i = 1; i < v.size(); i++)
            {
                prefix[v[i]] = prefix[v[i - 1]] + (i * (long long)(v[i] - v[i - 1]));
            }
        }
        for (const pair<int, vector<long long>> i : m)
        {
            const vector<long long> v = i.second;
            for (int i = v.size() - 2; i >= 0; i--)
            {
                suffix[v[i]] = suffix[v[i + 1]] + ((long long)(v.size() - i - 1) * (long long)(v[i + 1] - v[i]));
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans[i] += (prefix[i] + suffix[i]);
        }
        return ans;
    }
};