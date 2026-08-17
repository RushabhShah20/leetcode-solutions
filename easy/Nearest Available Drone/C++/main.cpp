// Problem: Nearest Available Drone
// Link to the problem: https://leetcode.com/problems/nearest-available-drone/
class Solution
{
public:
    int nearestDrone(vector<vector<int>> &drones, vector<int> &target)
    {
        const int n = drones.size();
        int ans = -1, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            const int y = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if (y <= drones[i][2] && y < mn)
            {
                mn = min(mn, y);
                ans = i;
            }
        }
        return ans;
    }
};