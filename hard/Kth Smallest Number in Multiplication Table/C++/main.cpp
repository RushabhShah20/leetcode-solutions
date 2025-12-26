// Problem: Kth Smallest Number in Multiplication Table
// Link to the problem: https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/
class Solution
{
public:
    int findKthNumber(int m, int n, int k)
    {
        int left = 1, right = m * n;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int count = 0;
            for (int i = 1; i <= m; i++)
            {
                count += min(n, mid / i);
            }
            if (count < k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        const int ans = left;
        return ans;
    }
};