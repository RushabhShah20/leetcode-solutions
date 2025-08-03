// Problem: Find Common Characters
// Link to the problem: https://leetcode.com/problems/find-common-characters/
class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<vector<int>> freq(words.size(), vector<int>(26, 0));
        vector<int> ansFreq(26, INT_MAX);
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                freq[i][words[i][j] - 'a']++;
            }
        }
        for (int i = 0; i < freq.size(); i++)
        {
            for (int j = 0; j < freq[i].size(); j++)
            {
                ansFreq[j] = min(ansFreq[j], freq[i][j]);
            }
        }
        for (int i = 0; i < ansFreq.size(); i++)
        {
            for (int j = 0; j < ansFreq[i]; j++)
            {
                string x(1, i + 'a');
                ans.push_back(x);
            }
        }
        return ans;
    }
};