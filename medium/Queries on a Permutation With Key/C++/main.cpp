// Problem: Queries on a Permutation With Key
// Link to the problem: https://leetcode.com/problems/queries-on-a-permutation-with-key/
class Solution
{
public:
    vector<int> processQueries(vector<int> &queries, int m)
    {
        int n = queries.size();
        vector<int> nums;
        for (int i = 0; i < m; i++)
        {
            nums.push_back(i + 1);
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = find(nums.begin(), nums.end(), queries[i]) - nums.begin();
            nums.erase(nums.begin() + ans[i]);
            nums.insert(nums.begin(), queries[i]);
        }
        return ans;
    }
};