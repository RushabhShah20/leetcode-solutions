// Problem: Nim Game
// Link to the problem: https://leetcode.com/problems/nim-game/
class Solution
{
public:
    bool canWinNim(int n)
    {
        if (n % 4 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};