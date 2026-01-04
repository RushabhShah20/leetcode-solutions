// Problem: Word Squares II
// Link to the problem: https://leetcode.com/problems/word-squares-ii/
class Solution
{
public:
    void backTrack(vector<vector<string>> &ans, vector<string> words, vector<bool> used, vector<string> current, int step)
    {
        const int n = words.size();
        if (step == 4)
        {
            ans.push_back(current);
            return;
        }
        for (int i = 0; i < n; ++i)
        {
            if (used[i])
            {
                continue;
            }
            bool canPlace = false;
            const string &word = words[i];
            if (step == 0)
            {
                canPlace = true;
            }
            else if (step == 1)
            {
                if (word[0] == current[0][0])
                {
                    canPlace = true;
                }
            }
            else if (step == 2)
            {
                if (word[0] == current[0][3])
                {
                    canPlace = true;
                }
            }
            else if (step == 3)
            {
                if (word[0] == current[1][3] && word[3] == current[2][3])
                {
                    canPlace = true;
                }
            }
            if (canPlace)
            {
                used[i] = true;
                current.push_back(word);
                backTrack(ans, words, used, current, step + 1);
                current.pop_back();
                used[i] = false;
            }
        }
    }
    vector<vector<string>> wordSquares(vector<string> &words)
    {
        vector<vector<string>> ans;
        const int n = words.size();
        vector<bool> used(n, false);
        vector<string> current;
        backTrack(ans, words, used, current, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};