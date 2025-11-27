// Problem: Find the Original Typed String I
// Link to the problem: https://leetcode.com/problems/find-the-original-typed-string-i/
class Solution
{
public:
    int possibleStringCount(string word)
    {
        int ans = 1, count = 1, n = word.size();
        for (int i = 1; i < n; i++)
        {
            if (word[i] == word[i - 1])
            {
                count++;
            }
            else
            {
                ans += (count - 1);
                count = 1;
            }
        }
        ans += (count - 1);
        return ans;
    }
};