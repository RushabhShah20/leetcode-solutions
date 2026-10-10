// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
class Solution
{
public:
    long long minSumSquareDiff(vector<int> &nums1, vector<int> &nums2, int k1, int k2)
    {
        const int n = nums1.size();
        long long ans = 0;
        int k = k1 + k2, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            nums1[i] = abs(nums1[i] - nums2[i]);
            x = max(x, nums1[i]);
        }
        int l = 0, r = x;
        while (l <= r)
        {
            const int m = (l + r) >> 1;
            long long a = 0;
            for (int i = 0; i < n; i++)
            {
                a += nums1[i] > m ? nums1[i] - m : 0;
            }
            const bool z = a <= k;
            if (z)
            {
                y = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums1[i] > y)
            {
                k -= nums1[i] - y;
            }
        }
        sort(nums1.begin(), nums1.end());
        for (int i = n - 1; i >= 0; i--)
        {
            long long b = min(y, nums1[i]);
            if (k > 0 && b > 0)
            {
                k--;
                b--;
            }
            ans += b * b;
        }
        return ans;
    }
};