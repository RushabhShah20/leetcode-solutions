// Problem: Filter Characters by Frequency
// Link to the problem: https://leetcode.com/problems/filter-characters-by-frequency/
class Solution
{
public:
    string filterCharacters(string s, int k)
    {
        const int n = s.size();
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (a[s[i] - 'a'] < k)
            {
                ans.append(1, s[i]);
            }
        }
        return ans;
    }
};