// Problem: H-Index II
// Link to the problem: https://leetcode.com/problems/h-index-ii/
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        const int n = citations.size();
        int ans = 0, l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (citations[m] >= n - m)
            {
                ans = h;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};