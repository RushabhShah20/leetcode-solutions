// Problem: Longest Subsequence With Limited Sum
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-limited-sum/
class Solution
{
public:
    int search(vector<int> nums, int k)
    {
        int n = nums.size(), l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] > k)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        int n = nums.size(), m = queries.size();
        sort(nums.begin(), nums.end());
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        vector<int> ans(m, 0);
        for (int i = 0; i < m; i++)
        {
            ans[i] = search(prefix, queries[i]);
        }
        return ans;
    }
};