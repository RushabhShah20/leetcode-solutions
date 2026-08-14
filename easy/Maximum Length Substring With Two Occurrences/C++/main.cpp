// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        const int n = s.size();
        int i = 0, j = 0, ans = 0;
        vector<int>a(26);
        while (j < n)
        {
            a[s[j]-'a']++;
            while (a[s[j]-'a'] > 2 && i < n)
            {
                a[s[i]-'a']--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};