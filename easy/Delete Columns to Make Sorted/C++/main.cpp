// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        const int n = strs.size(), m = strs[0].size();
        int ans = 0;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if ((strs[i][j] - 'a') > (strs[i + 1][j] - 'a'))
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};