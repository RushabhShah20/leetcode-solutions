// Problem: Permutation in String
// Link to the problem: https://leetcode.com/problems/permutation-in-string/
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n = s1.size(), m = s2.size();
        if (n > m)
        {
            return false;
        }
        vector<char> freq1(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq1[s1[i] - 'a']++;
        }
        vector<char> freq2(26, 0);
        for (int i = 0; i < m; i++)
        {
            if (i >= n)
            {
                freq2[s2[i] - 'a']++;
                freq2[s2[i - n] - 'a']--;
            }
            else
            {
                freq2[s2[i] - 'a']++;
            }
            if (i >= n - 1)
            {
                if (freq1 == freq2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};