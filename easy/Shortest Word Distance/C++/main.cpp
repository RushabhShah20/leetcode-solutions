// Problem: Shortest Word Distance
// Link to the problem: https://leetcode.com/problems/shortest-word-distance/
class Solution
{
public:
    int shortestDistance(vector<string> &wordsDict, string word1, string word2)
    {
        const int n = wordsDict.size();
        int ans = n, j = -1, k = -1;
        for (int i = 0; i < n; i++)
        {
            if (wordsDict[i] == word1)
            {
                j = i;
            }
            if (wordsDict[i] == word2)
            {
                k = i;
            }
            if (j != -1 && k != -1)
            {
                ans = min(ans, abs(j - k));
            }
        }
        return ans;
    }
};