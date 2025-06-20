// Problem: Truncate Sentence
// Link to the problem: https://leetcode.com/problems/truncate-sentence/
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                count++;
                if (count == k)
                {
                    s.erase(i, s.size() - i);
                }
            }
        }
        return s;
    }
};