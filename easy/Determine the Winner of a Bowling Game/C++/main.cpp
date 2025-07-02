// Problem: Determine the Winner of a Bowling Game
// Link to the problem: https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/
class Solution
{
public:
    int isWinner(vector<int> &player1, vector<int> &player2)
    {
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < player1.size(); i++)
        {
            if (i == 1)
            {
                if (player1[i - 1] == 10)
                {
                    ans1 += (2 * player1[i]);
                }
                else
                {
                    ans1 += (player1[i]);
                }
                if (player2[i - 1] == 10)
                {
                    ans2 += (2 * player2[i]);
                }
                else
                {
                    ans2 += (player2[i]);
                }
            }
            else if (i >= 2)
            {
                if (player1[i - 1] == 10 || player1[i - 2] == 10)
                {
                    ans1 += (2 * player1[i]);
                }
                else
                {
                    ans1 += (player1[i]);
                }
                if (player2[i - 1] == 10 || player2[i - 2] == 10)
                {
                    ans2 += (2 * player2[i]);
                }
                else
                {
                    ans2 += (player2[i]);
                }
            }
            else
            {
                ans1 += (player1[i]);
                ans2 += (player2[i]);
            }
        }
        if (ans1 > ans2)
        {
            return 1;
        }
        else if (ans1 < ans2)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
};