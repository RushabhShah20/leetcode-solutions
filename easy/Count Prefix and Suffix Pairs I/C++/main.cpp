// Problem: Count Prefix and Suffix Pairs I
// Link to the problem: https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/
class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = i + 1; j < words.size(); j++)
            {
                if (words[j].find(words[i]) == 0 && words[j].find(words[i], words[j].size() - words[i].size()) != words[j].npos)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};