// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
class Solution
{
public:
    bool stoneGameIX(vector<int> &stones)
    {
        const int n = stones.size();
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            const int x = stones[i] % 3;
            if (x  == 1)
            {
                b++;
            }
            else if (x  == 2)
            {
                c++;
            }
            else
            {
                a++;
            }
        }
        const bool ans = a & 1 ? abs(b - c) > 2 : b >= 1 && c >= 1;
        return ans;
    }
};