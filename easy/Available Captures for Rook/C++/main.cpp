// Problem: Available Captures for Rook
// Link to the problem: https://leetcode.com/problems/available-captures-for-rook/
class Solution
{
public:
    int numRookCaptures(vector<vector<char>> &board)
    {
        int ans = 0;
        pair<int, int> rook = {0, 0};
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (board[i][j] == 'R')
                {
                    rook = {i, j};
                    break;
                }
            }
        }
        for (int i = rook.first + 1; i < 8; i++)
        {
            if (board[i][rook.second] != '.')
            {
                if (board[i][rook.second] == 'p')
                {
                    ans++;
                }
                break;
            }
        }
        for (int i = rook.first - 1; i >= 0; i--)
        {
            if (board[i][rook.second] != '.')
            {
                if (board[i][rook.second] == 'p')
                {
                    ans++;
                }
                break;
            }
        }
        for (int j = rook.second + 1; j < 8; j++)
        {
            if (board[rook.first][j] != '.')
            {
                if (board[rook.first][j] == 'p')
                {
                    ans++;
                }
                break;
            }
        }
        for (int j = rook.second - 1; j >= 0; j--)
        {
            if (board[rook.first][j] != '.')
            {
                if (board[rook.first][j] == 'p')
                {
                    ans++;
                }
                break;
            }
        }
        return ans;
    }
};