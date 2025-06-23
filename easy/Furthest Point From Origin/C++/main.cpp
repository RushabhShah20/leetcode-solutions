// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int left = 0, right = 0, spaces = 0;
        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i] == 'L')
            {
                left++;
            }
            else if (moves[i] == 'R')
            {
                right++;
            }
            else
            {
                spaces++;
            }
        }
        return spaces + abs(left - right);
    }
};