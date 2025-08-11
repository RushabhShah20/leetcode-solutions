// Problem: Sum in a Matrix
// Link to the problem: https://leetcode.com/problems/sum-in-a-matrix/
class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        int ans = 0, m = nums.size(), n = nums[0].size();
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            vector<int> b;
            for (int j = 0; j < m; j++)
            {
                int x = *max_element(nums[j].begin(), nums[j].end());
                nums[j].erase(max_element(nums[j].begin(), nums[j].end()));
                b.push_back(x);
            }
            a.push_back(*max_element(b.begin(), b.end()));
        }
        for (int i = 0; i < a.size(); i++)
        {
            ans += a[i];
        }
        return ans;
    }
};