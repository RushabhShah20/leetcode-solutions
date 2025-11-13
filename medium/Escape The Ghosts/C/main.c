// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
bool escapeGhosts(int **ghosts, int ghostsSize, int *ghostsColSize, int *target, int targetSize)
{
    int x = (abs(target[0])) + (abs(target[1]));
    for (int i = 0; i < ghostsSize; i++)
    {
        int y = (abs(ghosts[i][0] - target[0])) + (abs(ghosts[i][1] - target[1]));
        if (y <= x)
        {
            return false;
        }
    }
    return true;
}