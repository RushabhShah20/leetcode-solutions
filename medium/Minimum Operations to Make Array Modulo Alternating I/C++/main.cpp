// Problem: Minimum Operations to Make Array Modulo Alternating I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-modulo-alternating-i/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        const int n = nums.size();
        vector<int> a(k, 0), b(k, 0);
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                a[nums[i] % k]++;
            }
            else
            {
                b[nums[i] % k]++;
            }
        }
        vector<long long> c(k, 0), d(k, 0);
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                const int x = (i - j + k) % k, y = (j - i + k) % k, z = min(x, y);
                c[i] += (long long)a[j] * z;
                d[i] += (long long)b[j] * z;
            }
        }
        int p = -1, q = -1, r = -1, s = -1;
        for (int i = 0; i < k; i++)
        {
            if (p == -1 || d[i] < d[p])
            {
                q = p;
                p = i;
            }
            else if (q == -1 || d[i] < d[q])
            {
                q = i;
            }
            if (r == -1 || c[i] < c[r])
            {
                s = r;
                r = i;
            }
            else if (s == -1 || c[i] < c[s])
            {
                s = i;
            }
        }
        if (p != r)
        {
            return (int)(d[p] + c[r]);
        }
        else
        {
            const long long ans1 = d[p] + c[s], ans2 = d[q] + c[r], ans = min(ans1, ans2);
            return (int)ans;
        }
    }
};