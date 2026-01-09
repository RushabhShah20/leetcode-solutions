// Problem: Find the Winner of the Circular Game
// Link to the problem: https://leetcode.com/problems/find-the-winner-of-the-circular-game/
class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = (ans + k) % i;
        }
        ans++;
        return ans;
    }
};