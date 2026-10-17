// Problem: Minimum Swaps to Sort by Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-swaps-to-sort-by-digit-sum/
class Solution
{
public:
    int find(const int x, vector<int> &d)
    {
        if (d[x] != x)
        {
            d[x] = find(d[x], d);
        }
        return d[x];
    }
    int minSwaps(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x = nums[i], y = 0;
            while (x > 0)
            {
                y += x % 10;
                x /= 10;
            }
            a[i] = y;
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = i;
        }
        sort(b.begin(), b.end(), [&](const int x, const int y)
             {if(a[x]!=a[y]){return a[x]<a[y];}return nums[x]<nums[y]; });
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            c[b[i]] = i;
        }
        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            d[i] = i;
        }
        int m = n;
        for (int i = 0; i < n; i++)
        {
            const int e = find(i, d), f = find(c[i], d);
            if (e != f)
            {
                d[e] = f;
                m--;
            }
        }
        const int ans = n - m;
        return ans;
    }
};