// Problem: H-Index
// Link to the problem: https://leetcode.com/problems/h-index/
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        const int n = citations.size();
        int ans = 0, l = 0, r = n;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            int count = 0;
            for (const int &citation : citations)
            {
                if (citation >= m)
                {
                    count++;
                }
            }
            if (count >= m)
            {
                ans = m;
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