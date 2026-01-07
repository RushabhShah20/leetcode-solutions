// Problem: Query Kth Smallest Trimmed Number
// Link to the problem: https://leetcode.com/problems/query-kth-smallest-trimmed-number/
class Solution
{
public:
    vector<int> smallestTrimmedNumbers(vector<string> &nums, vector<vector<int>> &queries)
    {
        const int n = nums.size(), m = nums[0].size();
        vector<int> ans;
        for (const vector<int> query : queries)
        {
            vector<pair<string, int>> pq;
            for (int i = 0; i < n; i++)
            {
                pq.push_back({nums[i].substr(m - query[1]), i});
            }
            sort(pq.begin(), pq.end());
            ans.push_back(pq[query[0] - 1].second);
        }
        return ans;
    }
};
