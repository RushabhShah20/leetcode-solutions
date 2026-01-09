// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        const int n = s.size();
        int i = 0, j = 0, ans = 0;
        unordered_map<char, int> m;
        while (j < n)
        {
            m[s[j]]++;
            while (m[s[j]] > 2 && i < n)
            {
                m[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};