// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int y = 0;
        int x = 0;
        for (const char move : moves)
        {
            if (move == 'U')
            {
                y++;
            }
            if (move == 'D')
            {
                y--;
            }
            if (move == 'R')
            {
                x++;
            }
            if (move == 'L')
            {
                x--;
            }
        }
        const bool ans = (x == 0 && y == 0);
        return ans;
    }
};