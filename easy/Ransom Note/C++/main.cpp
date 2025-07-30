// Problem: Ransom Note
// Link to the problem: https://leetcode.com/problems/ransom-note/
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> ransomNoteFreq(26, 0), magazineFreq(26, 0);
        for (int i = 0; i < ransomNote.size(); i++)
        {
            ransomNoteFreq[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.size(); i++)
        {
            magazineFreq[magazine[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (ransomNoteFreq[i] > magazineFreq[i])
            {
                return false;
            }
        }
        return true;
    }
};