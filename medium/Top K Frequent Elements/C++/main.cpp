// Problem: Top K Frequent Elements
// Link to the problem: https://leetcode.com/problems/top-k-frequent-elements/
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> pq;
        for (auto num : nums)
        {
            m[num]++;
        }
        for (auto kv : m)
        {
            pq.push({kv.second, kv.first});
        }
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};