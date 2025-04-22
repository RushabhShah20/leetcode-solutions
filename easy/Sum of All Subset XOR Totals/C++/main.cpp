// Problem: Sum of All Subset XOR Totals
// Link to the problem: https://leetcode.com/problems/sum-of-all-subset-xor-totals/
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &arr)
    {
        int n = arr.size();
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < (1 << n); i++)
        {
            vector<int> subset;
            for (int j = 0; j < n; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    subset.push_back(arr[j]);
                }
            }
            res.push_back(subset);
        }
        sort(res.begin(), res.end());
        return res;
    }
    int subsetXORSum(vector<int> &nums)
    {
        int ans = 0;
        vector<vector<int>> sub = subsets(nums);
        for (int i = 0; i < sub.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < sub[i].size(); j++)
            {
                sum ^= sub[i][j];
            }
            ans += sum;
        }
        return ans;
    }
};