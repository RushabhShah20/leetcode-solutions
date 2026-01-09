// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
class Solution
{
public:
    bool stoneGameIX(vector<int> &stones)
    {
        bool ans = true;
        int a = 0, b = 0, c = 0;
        for (const int &stone : stones)
        {
            if (stone % 3 == 1)
            {
                b++;
            }
            else if (stone % 3 == 2)
            {
                c++;
            }
            else
            {
                a++;
            }
        }
        if (min(b, c) == 0)
        {
            if (max(b, c) > 2 && a % 2 > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (abs(b - c) > 2 || a % 2 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};