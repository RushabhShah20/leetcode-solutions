// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
bool judgeCircle(char *moves)
{
    const int n = strlen(moves);
    int y = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (moves[i] == 'U')
        {
            y++;
        }
        if (moves[i] == 'D')
        {
            y--;
        }
        if (moves[i] == 'R')
        {
            x++;
        }
        if (moves[i] == 'L')
        {
            x--;
        }
    }
    const bool ans = (x == 0 && y == 0);
    return ans;
}