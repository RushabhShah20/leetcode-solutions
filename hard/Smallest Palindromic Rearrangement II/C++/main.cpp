// Problem: Smallest Palindromic Rearrangement II
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-ii/
class Solution
{
public:
    long long comb(const long long n, long long m, const long long k)
    {
        long long ans = 1;
        m = min(m, n - m);
        for (long long i = 1; i <= m; i++)
        {
            ans = ans * (n - i + 1) / i;
            if (ans > k)
            {
                return k + 1;
            }
        }
        return ans;
    }
    long long permutations(int r, const int k, const vector<int> &a)
    {
        long long b = 1;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            b *= comb(r, a[i], k);
            if (b > k)
            {
                break;
            }
            r -= a[i];
        }
        return b;
    }
    string smallestPalindrome(string s, int k)
    {
        const int n = s.size(), m = n / 2;
        vector<int> a(26, 0);
        for (int i = 0; i < m; i++)
        {
            a[s[i] - 'a'] += 1;
        }
        string x = "";
        long long p = 1;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < 26; i++)
            {
                if (a[i] == 0)
                {
                    continue;
                }
                a[i] -= 1;
                const long long b = permutations(m - j - 1, k, a);
                if (p + b > k)
                {
                    x += (char)(i + 'a');
                    break;
                }
                a[i] += 1;
                p += b;
            }
        }
        if (x.length() < m)
        {
            return "";
        }
        const string y = n & 1 ? string(1, s[m]) : "";
        string z = x;
        reverse(z.begin(), z.end());
        const string ans = x + y + z;
        return ans;
    }
};
