// Problem: Single-Row Keyboard
// Link to the problem: https://leetcode.com/problems/single-row-keyboard/
class Solution
{
public:
    int calculateTime(string keyboard, string word)
    {
        int ans = 0;
        const int n = word.size();
        unordered_map<char, int> m;
        for (int i = 0; i < 26; i++)
        {
            m[keyboard[i]] = i;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(m[word[i]] - j);
            j = m[word[i]];
        }
        return ans;
    }
};
s