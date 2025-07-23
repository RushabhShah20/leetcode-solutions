// Problem: Find the K-th Character in String Game I
// Link to the problem: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
class Solution
{
public:
    char kthCharacter(int k)
    {
        string ans = "a";
        while (ans.size() < k)
        {
            string x = ans;
            for (int i = 0; i < x.size(); i++)
            {
                x[i] += 1;
            }
            ans += x;
        }
        return ans[k - 1];
    }
};