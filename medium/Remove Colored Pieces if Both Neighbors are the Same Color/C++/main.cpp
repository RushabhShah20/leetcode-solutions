// Problem: Remove Colored Pieces if Both Neighbors are the Same Color
// Link to the problem: https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/
class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int alice = 0, bob = 0;
        for (int i = 1; i < colors.size() - 1; i++)
        {
            if (colors[i] == 'A')
            {
                if (colors[i] == colors[i - 1] && colors[i] == colors[i + 1])
                {
                    alice++;
                }
            }
            else
            {
                if (colors[i] == colors[i - 1] && colors[i] == colors[i + 1])
                {
                    bob++;
                }
            }
        }
        if (alice > bob)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};