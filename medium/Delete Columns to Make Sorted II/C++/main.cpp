// Problem: Delete Columns to Make Sorted II
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted-ii/
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        const int n = strs.size(), m = strs[0].length();
        vector<bool> a(n - 1, false);
        int ans = 0;
        for (int j = 0; j < m; j++)
        {
            bool x = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == false & strs[i][j] > strs[i + 1][j])
                {
                    x = false;
                    break;
                }
            }
            if (x == false)
            {
                ans++;
                continue;
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (strs[i][j] < strs[i + 1][j])
                {
                    a[i] = true;
                }
            }
        }
        return ans;
    }
};