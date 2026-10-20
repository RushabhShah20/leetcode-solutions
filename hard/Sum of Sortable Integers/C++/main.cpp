// Problem: Sum of Sortable Integers
// Link to the problem: https://leetcode.com/problems/sum-of-sortable-integers/
class Solution
{
public:
    bool check(const vector<int> &x, const vector<int> &y)
    {
        const int n = x.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (x[i] > x[i + 1])
            {
                vector<int> z;
                z.insert(z.end(), x.begin() + i + 1, x.end());
                z.insert(z.end(), x.begin(), x.begin() + i + 1);
                return y == z;
            }
        }
        return x == y;
    }
    int sortableIntegers(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> a;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
                if (n / i != i)
                {
                    a.push_back(n / i);
                }
            }
        }
        vector<int> b = nums;
        sort(b.begin(), b.end());
        const int m = a.size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            bool z = true;
            for (int j = 0; j < n; j += a[i])
            {
                const int k = j + a[i] - 1;
                const vector<int> x(nums.begin() + j, nums.begin() + k + 1), y(b.begin() + j, b.begin() + k + 1);
                if (!check(x, y))
                {
                    z = false;
                    break;
                }
            }
            if (z)
            {
                ans += a[i];
            }
        }
        return ans;
    }
};