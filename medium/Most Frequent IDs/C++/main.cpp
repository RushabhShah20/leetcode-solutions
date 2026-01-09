// Problem: Most Frequent IDs
// Link to the problem: https://leetcode.com/problems/most-frequent-ids/
class Solution
{
public:
    vector<long long> mostFrequentIDs(vector<int> &nums, vector<int> &freq)
    {
        const int n = nums.size();
        vector<long long> ans;
        priority_queue<pair<long long, int>> pq;
        unordered_map<int, long long> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] += freq[i];
            pq.push({m[nums[i]], nums[i]});
            while (!pq.empty() && m[pq.top().second] != pq.top().first)
            {
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};