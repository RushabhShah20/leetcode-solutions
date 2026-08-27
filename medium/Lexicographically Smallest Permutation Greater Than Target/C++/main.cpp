// Problem: Lexicographically Smallest Permutation Greater Than Target
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/
class Solution
{
public:
    string get(const vector<int> &a)
    {
        string ans;
        for (int i = 0; i < 26; i++)
        {
            ans.append(a[i], 'a' + i);
        }
        return ans;
    }
    string lexGreaterPermutation(string s, string target)
    {
        const int n = s.size();
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
            a[target[i] - 'a']--;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            const int x = target[i] - 'a';
            a[x]++;
            int mn = INT_MAX;
            for (int j = 0; j < 26; j++)
            {
                mn = min(mn, a[j]);
            }
            if (mn < 0)
            {
                continue;
            }
            for (int j = x + 1; j < 26; j++)
            {
                if (a[j]>0)
                {
                    a[j]--;
                    target[i] = 'a' + j;
                    target.resize(i + 1);
                    const string ans = target + get(a);
                    return ans;
                }
            }
        }
        return "";
    }
};
