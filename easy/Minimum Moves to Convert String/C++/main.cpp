// Problem: Minimum Moves to Convert String
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-convert-string/
class Solution
{
public:
    int minimumMoves(string s)
    {
        int ans = 0, n = s.size();
        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == 'X')
            {
                s.insert(i, 3, 'O');
                s.erase(i, 3);
                i -= 3;
                ans++;
            }
            else
            {
                i--;
            }
        }
        return ans;
    }
};