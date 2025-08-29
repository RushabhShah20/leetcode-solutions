// Problem: XOR Queries of a Subarray
// Link to the problem: https://leetcode.com/problems/xor-queries-of-a-subarray/
class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size()), prefix(arr.size());
        prefix[0] = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            prefix[i] = prefix[i - 1] ^ arr[i];
        }
        for (int i = 0; i < queries.size(); i++)
        {
            int left = queries[i][0], right = queries[i][1];
            if (left == 0)
            {
                ans[i] = prefix[right];
            }
            else
            {
                ans[i] = prefix[right] ^ prefix[left - 1];
            }
        }
        return ans;
    }
};