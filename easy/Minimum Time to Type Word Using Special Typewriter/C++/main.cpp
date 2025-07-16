// Problem: Minimum Time to Type Word Using Special Typewriter
// Link to the problem: https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/
class Solution
{
public:
    int minTimeToType(string word)
    {
        int ans = word.size();
        char curr = 'a';
        for (int i = 0; i < word.size(); i++)
        {
            ans += (min(abs(word[i] - curr), 26 - abs(curr - word[i])));
            curr = word[i];
        }
        return ans;
    }
};