// Problem: Walking Robot Simulation
// Link to the problem: https://leetcode.com/problems/walking-robot-simulation/
class Solution
{
public:
    int robotSim(vector<int> &commands, vector<vector<int>> &obstacles)
    {
        set<pair<int, int>> o;
        for (const vector<int> &obstacle : obstacles)
        {
            o.insert(make_pair(obstacle[0], obstacle[1]));
        }
        const vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0, j = 0, ans = 0;
        for (const int command : commands)
        {
            if (command == -1)
            {
                j = (j + 1) % 4;
            }
            if (command == -2)
            {
                j = (j + 3) % 4;
            }
            const pair<int, int> dir = dirs[j];
            for (int i = 0; i < command; i++)
            {
                const int a = x + dir.first, b = y + dir.second;
                if (o.count(make_pair(a, b)))
                {
                    break;
                }
                x = a;
                y = b;
            }
            ans = max(ans, x * x + y * y);
        }
        return ans;
    }
};