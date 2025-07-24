// Problem: Count Common Words With One Occurrence
// Link to the problem: https://leetcode.com/problems/count-common-words-with-one-occurrence/
class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        int ans = 0;
        map<string, int> m1, m2;
        for (int i = 0; i < words1.size(); i++)
        {
            for (int j = 0; j < words2.size(); j++)
            {
                if (words1[i] == words2[j])
                {
                    m1[words1[i]]++;
                    break;
                }
            }
        }
        for (int i = 0; i < words2.size(); i++)
        {
            for (int j = 0; j < words1.size(); j++)
            {
                if (words2[i] == words1[j])
                {
                    m2[words2[i]]++;
                    break;
                }
            }
        }
        for (auto i : m1)
        {
            for (auto j : m2)
            {
                if (i.first == j.first)
                {
                    if (i.second == 1 && j.second == 1)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};