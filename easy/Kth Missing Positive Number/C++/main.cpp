// Problem: Kth Missing Positive Number
// Link to the problem: https://leetcode.com/problems/kth-missing-positive-number/
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        const int n = arr.size();
        int l = 0, r = n, m;
        while (l < r)
        {
            m = (l + r) / 2;
            if (arr[m] - 1 - m < k)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        return l + k;
    }
};