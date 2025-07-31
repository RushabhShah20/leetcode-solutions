// Problem: Count Pairs Of Similar Strings
// Link to the problem: https://leetcode.com/problems/count-pairs-of-similar-strings/
class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        int ans = 0;
        vector<set<char>> x;
        for (int i = 0; i < words.size(); i++)
        {
            set<char> s(words[i].begin(), words[i].end());
            x.push_back(s);
        }
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = i + 1; j < x.size(); j++)
            {
                if (x[i] == x[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};