// Problem: Find Maximum Number of String Pairs
// Link to the problem: https://leetcode.com/problems/find-maximum-number-of-string-pairs/
class Solution
{
public:
    int maximumNumberOfStringPairs(vector<string> &words)
    {
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            string x = words[i];
            reverse(x.begin(), x.end());
            for (int j = i + 1; j < words.size(); j++)
            {
                if (x == words[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};