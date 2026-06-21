// Problem: Maximum Manhattan Distance After All Moves
// Link to the problem: https://leetcode.com/problems/maximum-manhattan-distance-after-all-moves/
class Solution
{
public:
    int maxDistance(string moves)
    {
        const int n = moves.size();
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == 'U')
            {
                y++;
            }
            else if (moves[i] == 'D')
            {
                y--;
            }
            else if (moves[i] == 'L')
            {
                x--;
            }
            else if (moves[i] == 'R')
            {
                x++;
            }
            else
            {
                z++;
            }
        }
        const int ans = abs(x) + abs(y) + z;
        return ans;
    }
};