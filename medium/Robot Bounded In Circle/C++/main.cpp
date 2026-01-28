// Problem: Robot Bounded In Circle
// Link to the problem: https://leetcode.com/problems/robot-bounded-in-circle/
class Solution
{
public:
    bool isRobotBounded(string instructions)
    {
        const vector<vector<int>> dirs = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
        int i = 0, x = 0, y = 0;
        for (const char &instruction : instructions)
        {
            if (instruction == 'L')
            {
                i = (i + 1) % 4;
            }
            else if (instruction == 'R')
            {
                i = (i + 3) % 4;
            }
            else
            {
                x += dirs[i][0];
                y += dirs[i][1];
            }
        }
        const bool ans = x == 0 && y == 0 || i != 0;
        return ans;
    }
};