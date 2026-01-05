// Problem: Maximum Matrix Sum
// Link to the problem: https://leetcode.com/problems/maximum-matrix-sum/
class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        long long ans = 0;
        int minVal = INT_MAX, count = 0;
        for (const vector<int> rows : matrix)
        {
            for (const int val : rows)
            {
                ans += abs(val);
                if (val < 0)
                {
                    count++;
                }
                minVal = min(minVal, abs(val));
            }
        }
        if (count % 2 != 0)
        {
            ans -= ((long long)(2) * (long long)(minVal));
        }
        return ans;
    }
};