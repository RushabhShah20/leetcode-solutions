// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
class Solution
{
public:
    string mapWordWeights(vector<string> &words, vector<int> &weights)
    {
        const int n = words.size();
        string ans;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            const int m = words[i].size();
            for (int j = 0; j < m; j++)
            {
                sum += weights[words[i][j] - 'a'];
            }
            ans += 'z' - (sum % 26);
        }
        return ans;
    }
};
