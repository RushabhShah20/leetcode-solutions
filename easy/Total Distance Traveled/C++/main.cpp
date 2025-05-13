// Problem: Total Distance Traveled
// Link to the problem: https://leetcode.com/problems/total-distance-traveled/
class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        return 10 * (mainTank + min(additionalTank, (mainTank - 1) / 4));
    }
};