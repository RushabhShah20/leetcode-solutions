// Problem: Find Words That Can Be Formed by Characters
// Link to the problem: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        vector<int> freq(26, 0);
        for (int i = 0; i < chars.size(); i++)
        {
            freq[chars[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            vector<int> charFreq(26, 0);
            for (int j = 0; j < words[i].size(); j++)
            {
                charFreq[words[i][j] - 'a']++;
            }
            bool x = true;
            for (int j = 0; j < freq.size(); j++)
            {
                if (freq[j] < charFreq[j])
                {
                    x = false;
                }
            }
            if (x == true)
            {
                ans += words[i].size();
            }
        }
        return ans;
    }
};