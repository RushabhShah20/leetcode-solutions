// Problem: The k-th Lexicographical String of All Happy Strings of Length n
// Link to the problem: https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/
class Solution
{
public:
    string getHappyString(int n, int k)
    {
        const int x = 3 * (1 << (n - 1));
        if (k > x)
        {
            return "";
        }
        string ans(n, ' ');
        const int a = 1, b = a + (1 << (n - 1)), c = b + (1 << (n - 1));
        if (k < b)
        {
            ans[0] = 'a';
            k -= a;
        }
        else if (k < c)
        {
            ans[0] = 'b';
            k -= b;
        }
        else
        {
            ans[0] = 'c';
            k -= c;
        }
        const vector<string> s = {"bc", "ac", "ab"};
        for (int i = 1; i < n; i++)
        {
            const int m = 1 << (n - i - 1), j = ans[i - 1] - 'a';
            if (k < m)
            {
                ans[i] = s[j][0];
            }
            else
            {
                ans[i] = s[j][1];
                k -= m;
            }
        }
        return ans;
    }
};