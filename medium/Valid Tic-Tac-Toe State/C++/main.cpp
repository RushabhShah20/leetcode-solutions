// Problem: Valid Tic-Tac-Toe State
// Link to the problem: https://leetcode.com/problems/valid-tic-tac-toe-state/
class Solution
{
public:
    int countWins(vector<string> &board, char c)
    {
        int ans = 0;
        if (board[0][0] == c && board[0][1] == c && board[0][2] == c)
        {
            ans++;
        }
        if (board[1][0] == c && board[1][1] == c && board[1][2] == c)
        {
            ans++;
        }
        if (board[2][0] == c && board[2][1] == c && board[2][2] == c)
        {
            ans++;
        }
        if (board[0][0] == c && board[1][0] == c && board[2][0] == c)
        {
            ans++;
        }
        if (board[0][1] == c && board[1][1] == c && board[2][1] == c)
        {
            ans++;
        }
        if (board[0][2] == c && board[1][2] == c && board[2][2] == c)
        {
            ans++;
        }
        if (board[0][0] == c && board[1][1] == c && board[2][2] == c)
        {
            ans++;
        }
        if (board[0][2] == c && board[1][1] == c && board[2][0] == c)
        {
            ans++;
        }
        return ans;
    }
    bool validTicTacToe(vector<string> &board)
    {
        int countX = 0, countO = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 'X')
                {
                    countX++;
                }
                else if (board[i][j] == 'O')
                {
                    countO++;
                }
            }
        }
        int winO = countWins(board, 'O'), winX = countWins(board, 'X');
        if (countO > countX)
        {
            return false;
        }
        else if (countX - countO > 1)
        {
            return false;
        }
        else if (winO > 2 || winX > 2)
        {
            return false;
        }
        else if (winO >= 1 && winX >= 1)
        {
            return false;
        }
        else if (winO == 0 && winX >= 1 && countX == countO)
        {
            return false;
        }
        else if (winX == 0 && winO >= 1 && countO < countX)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};