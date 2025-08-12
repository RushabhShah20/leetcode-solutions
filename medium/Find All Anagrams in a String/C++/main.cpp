// Problem: Find All Anagrams in a String
// Link to the problem: https://leetcode.com/problems/find-all-anagrams-in-a-string/
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans, freqS(26, 0), freqP(26, 0);
        for (int i = 0; i < p.size(); i++)
        {
            freqP[p[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i >= p.size())
            {
                freqS[s[i] - 'a']++;
                freqS[s[i - p.size()] - 'a']--;
            }
            else
            {
                freqS[s[i] - 'a']++;
            }
            if (i >= (p.size() - 1))
            {
                if (freqP == freqS)
                {
                    ans.push_back(i - p.size() + 1);
                }
            }
        }
        return ans;
    }
};