// Problem: Fixed Point
// Link to the problem: https://leetcode.com/problems/fixed-point/
class Solution
{
public:
    int fixedPoint(vector<int> &arr)
    {
        const int n = arr.size();
        int ans = -1, l = 0, r = n - 1;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (arr[m] == m)
            {
                ans = m;
                r = m - 1;
            }
            if (arr[m] < m)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return ans;
    }
};