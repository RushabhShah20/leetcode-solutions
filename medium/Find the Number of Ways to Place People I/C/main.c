// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
int numberOfPairs(int **points, int pointsSize, int *pointsColSize)
{
    int ans = 0;
    for (int i = 0; i < pointsSize; i++)
    {
        for (int j = 0; j < pointsSize; j++)
        {
            if (i != j)
            {
                int x1 = points[i][0], y1 = points[i][1], x2 = points[j][0], y2 = points[j][1];
                if ((x1 <= x2) && (y1 >= y2))
                {
                    bool z = true;
                    for (int k = 0; k < pointsSize; k++)
                    {
                        int x = points[k][0], y = points[k][1];
                        if (i != k && j != k)
                        {
                            if (((x1 <= x) && (x2 >= x)) && ((y1 >= y) && (y2 <= y)))
                            {
                                z = false;
                                break;
                            }
                        }
                    }
                    if (z == true)
                    {
                        ans++;
                    }
                }
            }
        }
    }
    return ans;
}