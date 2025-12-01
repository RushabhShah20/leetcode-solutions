// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
class Solution
{
public:
    int maxCount(int m, int n, vector<vector<int>> &ops)
    {
        for (const vector<int> op : ops)
        {
            m = min(m, op[0]);
            n = min(n, op[1]);
        }
        const int ans = m * n;
        return ans;
    }
};