// Problem: Lexicographically Smallest Palindromic Permutation Greater Than Target
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-palindromic-permutation-greater-than-target/
class Solution
{
public:
    bool check(const char c, const string &p, const string &t, const string &target, const vector<int> &a)
    {
        string b = p;
        b.push_back(c);
        for (int i = 25; i >= 0; i--)
        {
            b.append(a[i], 'a' + i);
        }
        string d = b + t;
        string q = b;
        reverse(q.begin(), q.end());
        d += q;
        return d > target;
    }

    string lexPalindromicPermutation(string s, string target)
    {
        const int n = s.length();
        if (n == 1)
        {
            return s > target ? s : "";
        }
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        string t = "";
        for (int i = 0; i < 26; i++)
        {
            if (a[i] & 1)
            {
                if (t != "")
                {
                    return "";
                }
                t = string(1, 'a' + i);
            }
            a[i] /= 2;
        }
        string p = "";
        for (int i = 0; i < n / 2; i++)
        {
            bool x = false;
            for (int j = 0; j < 26; j++)
            {
                if (a[j] == 0)
                {
                    continue;
                }
                a[j]--;
                if (check('a' + j, p, t, target, a))
                {
                    p.push_back('a' + j);
                    x = true;
                    break;
                }
                else
                {
                    a[j]++;
                }
            }
            if (!x)
            {
                return "";
            }
            if (p[i] > target[i])
            {
                string b = p;
                for (int j = 0; j < 26; j++)
                {
                    b.append(a[j], 'a' + j);
                }
                string d = b + t;
                string q = b;
                reverse(q.begin(), q.end());
                d += q;
                return d;
            }
        }
        string ans = p + t;
        string r = p;
        reverse(r.begin(), r.end());
        ans += r;
        return ans;
    }
};