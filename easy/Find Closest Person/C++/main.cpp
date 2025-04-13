// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        if (abs(x - z) < abs(y - z))
        {
            return 1;
        }
        else if (abs(x - z) > abs(y - z))
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
};