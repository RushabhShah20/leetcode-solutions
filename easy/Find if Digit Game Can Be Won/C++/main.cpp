// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {
        int x = 0;
        int y = 0;
        for (int num : nums)
        {
            if (num / 10 == 0)
            {
                x += num;
            }
            else
            {
                y += num;
            }
        }
        return x != y;
    }
};