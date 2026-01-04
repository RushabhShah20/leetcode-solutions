// Problem: Find Maximum Value in a Constrained Sequence
// Link to the problem: https://leetcode.com/problems/find-maximum-value-in-a-constrained-sequence/
class Solution
{
public:
    int findMaxVal(int n, vector<vector<int>> &restrictions, vector<int> &diff)
    {
        vector<int> a(n, 2000000000);
        a[0] = 0;
        for (const vector<int> &restriction : restrictions)
        {
            a[restriction[0]] = min(a[restriction[0]], restriction[1]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] > a[i] + diff[i])
            {
                a[i + 1] = a[i] + diff[i];
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i - 1] > a[i] + diff[i - 1])
            {
                a[i - 1] = a[i] + diff[i - 1];
            }
        }
        int ans = 0;
        for (int i : a)
        {
            ans = max(ans, i);
        }
        return ans;
    }
};