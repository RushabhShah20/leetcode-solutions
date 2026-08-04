// Problem: Rearrange String to Avoid Character Pair
// Link to the problem: https://leetcode.com/problems/rearrange-string-to-avoid-character-pair/
class Solution
{
public:
    string rearrangeString(string s, char x, char y)
    {
        const int n = s.size();
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        string ans;
        ans.append(a[y - 'a'], y);
        ans.append(a[x - 'a'], x);
        for (int i = 0; i < 26; i++)
        {
            if (x - 'a' != i && y - 'a' != i)
            {
                ans.append(a[i], 'a' + i);
            }
        }
        return ans;
    }
};