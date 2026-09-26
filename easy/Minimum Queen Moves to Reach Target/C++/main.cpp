// Problem: Minimum Queen Moves to Reach Target
// Link to the problem: https://leetcode.com/problems/minimum-queen-moves-to-reach-target/
class Solution
{
public:
    int minQueenMoves(vector<int> &source, vector<int> &target)
    {
        const int x1 = source[0], y1 = source[1], x2 = target[0], y2 = target[1];
        const int ans = x1 == x2 && y1 == y2 ? 0 : (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2) ? 1 : 2);
        return ans;
    }
};
