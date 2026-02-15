// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
class Solution
{
public:
    string mapWordWeights(vector<string> &words, vector<int> &weights)
    {
        string ans;
        for (const string word : words)
        {
            int sum = 0;
            for (const char c : word)
            {
                sum += weights[c - 'a'];
            }
            sum %= 26;
            sum = 26 - sum;
            ans += ('a' + sum - 1);
        }
        return ans;
    }
};
