// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
class Solution
{
public:
    bool escapeGhosts(vector<vector<int>> &ghosts, vector<int> &target)
    {
        int x = (abs(target[0])) + (abs(target[1]));
        for (vector<int> ghost : ghosts)
        {
            int y = (abs(ghost[0] - target[0])) + (abs(ghost[1] - target[1]));
            if (y <= x)
            {
                return false;
            }
        }
        return true;
    }
};