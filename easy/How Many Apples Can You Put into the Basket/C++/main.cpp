// Problem: How Many Apples Can You Put into the Basket
// Link to the problem: https://leetcode.com/problems/how-many-apples-can-you-put-into-the-basket/
class Solution
{
public:
    int maxNumberOfApples(vector<int> &weight)
    {
        const int n = weight.size();
        sort(weight.begin(), weight.end());
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i - 1] + weight[i - 1];
        }
        int ans = 0, l = 1, r = n;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (a[m] <= 5000)
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