// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
class Solution
{
public:
    bool check(const vector<int> &a, const int k)
    {
        const int n = a.size();
        unordered_map<long long, int> m;
        constexpr int p1 = 31, p2 = 37;
        constexpr long long m1 = 1000000007, m2 = 1000000009;
        long long e1 = 1, e2 = 1, h1 = 0, h2 = 0;
        for (int i = 0; i < k; i++)
        {
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
        }
        for (int i = 1; i < k; i++)
        {
            e1 = e1 * p1 % m1;
            e2 = e2 * p2 % m2;
        }
        m[h1 * m2 + h2] = 1;
        for (int i = k; i < n; i++)
        {
            const long long x1 = a[i - k] * e1 % m1;
            h1 = (h1 - x1 + m1) % m1;
            h1 = (h1 * p1 % m1 + a[i]) % m1;
            const long long x2 = a[i - k] * e2 % m2;
            h2 = (h2 - x2 + m2) % m2;
            h2 = (h2 * p2 % m2 + a[i]) % m2;
            m[h1 * m2 + h2]++;
        }
        for (const pair<long long, int> i : m)
        {
            if (i.second == 1)
            {
                return false;
            }
        }
        return true;
    }
    int smallestUniqueSubarray(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = n, l = 1, r = n;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (check(nums, m))
            {
                l = m + 1;
            }
            else
            {
                ans = m;
                r = m - 1;
            }
        }
        return ans;
    }
};