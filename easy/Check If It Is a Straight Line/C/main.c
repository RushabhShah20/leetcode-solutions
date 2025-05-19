// Problem: Check If It Is a Straight Line
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-straight-line/
bool checkStraightLine(int **coordinates, int coordinatesSize, int *coordinatesColSize)
{
    bool x = true;
    for (int i = 1; i < coordinatesSize - 1; i++)
    {
        int x1 = coordinates[i - 1][0], x2 = coordinates[i][0], x3 = coordinates[i + 1][0], y1 = coordinates[i - 1][1], y2 = coordinates[i][1], y3 = coordinates[i + 1][1];
        if ((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1))
        {
            x = false;
            break;
        }
    }
    return x;
}