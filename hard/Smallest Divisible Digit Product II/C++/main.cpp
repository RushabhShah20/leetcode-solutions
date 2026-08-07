// Problem: Smallest Divisible Digit Product II
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-ii/
class Solution
{
public:
    string smallestNumber(string num, long long t)
    {
        long long a = t;
        for (int i = 2; i <= 9; i++)
        {
            while (a % i == 0)
            {
                a /= i;
            }
        }
        if (a > 1)
        {
            return "-1";
        }
        const int n = num.size();
        vector<long long> b(n + 1);
        b[0] = t;
        int l = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (num[i] == '0')
            {
                l = i;
                break;
            }
            b[i + 1] = b[i] / gcd(b[i], num[i] - '0');
        }
        if (b[n] == 1)
        {
            return num;
        }
        for (int i = l; i >= 0; i--)
        {
            while (++num[i] <= '9')
            {
                long long x = b[i] / gcd(b[i], num[i] - '0');
                int k = 9;
                for (int j = n - 1; j > i; j--)
                {
                    while (x % k)
                    {
                        k--;
                    }
                    x /= k;
                    num[j] = '0' + k;
                }
                if (x == 1)
                {
                    return num;
                }
            }
        }
        string ans;
        for (int i = 9; i > 1; i--)
        {
            while (t % i == 0)
            {
                ans += i + '0';
                t /= i;
            }
        }
        ans += string(max(n + 1 - (int)ans.size(), 0), '1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};