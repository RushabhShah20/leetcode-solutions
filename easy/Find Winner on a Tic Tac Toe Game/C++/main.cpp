// Problem: Find Winner on a Tic Tac Toe Game
// Link to the problem: https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
class Solution
{
public:
    int winner(vector<vector<int>> grid)
    {
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            int numX = 0, numO = 0;
            for (int j = 0; j < 3; j++)
            {
                if (grid[i][j] == 1)
                {
                    numX++;
                }
                if (grid[i][j] == 2)
                {
                    numO++;
                }
            }
            if (numX == 3)
            {
                return 1;
            }
            if (numO == 3)
            {
                return 2;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            int numX = 0, numO = 0;
            for (int i = 0; i < 3; i++)
            {
                if (grid[i][j] == 1)
                {
                    numX++;
                }
                if (grid[i][j] == 2)
                {
                    numO++;
                }
            }
            if (numX == 3)
            {
                return 1;
            }
            if (numO == 3)
            {
                return 2;
            }
        }
        int numX = 0, numO = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == j)
                {
                    if (grid[i][j] == 1)
                    {
                        numX++;
                    }
                    if (grid[i][j] == 2)
                    {
                        numO++;
                    }
                }
            }
        }
        if (numX == 3)
        {
            return 1;
        }
        if (numO == 3)
        {
            return 2;
        }
        numX = 0, numO = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i + j == 2)
                {
                    if (grid[i][j] == 1)
                    {
                        numX++;
                    }
                    if (grid[i][j] == 2)
                    {
                        numO++;
                    }
                }
            }
        }
        if (numX == 3)
        {
            return 1;
        }
        if (numO == 3)
        {
            return 2;
        }
        numX = 0, numO = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (grid[i][j] == 1)
                {
                    numX++;
                }
                if (grid[i][j] == 2)
                {
                    numO++;
                }
            }
        }
        if (numX + numO == 9)
        {
            ans = 3;
        }
        return ans;
    }
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<vector<int>> grid(3, vector<int>(3, 0));
        for (int i = 0; i < moves.size(); i++)
        {
            if (i % 2 == 0)
            {
                grid[moves[i][0]][moves[i][1]] = 1;
            }
            else
            {
                grid[moves[i][0]][moves[i][1]] = 2;
            }
        }
        if (moves.size() <= 4)
        {
            return "Pending";
        }
        else if (moves.size() == 5)
        {
            int x = winner(grid);
            if (x == 0)
            {
                return "Pending";
            }
            else if (x == 1)
            {
                return "A";
            }
            else if (x == 2)
            {
                return "B";
            }
            else
            {
                return "Draw";
            }
        }
        else if (moves.size() == 6)
        {
            int x = winner(grid);
            if (x == 0)
            {
                return "Pending";
            }
            else if (x == 1)
            {
                return "A";
            }
            else if (x == 2)
            {
                return "B";
            }
            else
            {
                return "Draw";
            }
        }
        else if (moves.size() == 7)
        {
            int x = winner(grid);
            if (x == 0)
            {
                return "Pending";
            }
            else if (x == 1)
            {
                return "A";
            }
            else if (x == 2)
            {
                return "B";
            }
            else
            {
                return "Draw";
            }
        }
        else if (moves.size() == 8)
        {
            int x = winner(grid);
            if (x == 0)
            {
                return "Pending";
            }
            else if (x == 1)
            {
                return "A";
            }
            else if (x == 2)
            {
                return "B";
            }
            else
            {
                return "Draw";
            }
        }
        else
        {
            int x = winner(grid);
            if (x == 0)
            {
                return "Pending";
            }
            else if (x == 1)
            {
                return "A";
            }
            else if (x == 2)
            {
                return "B";
            }
            else
            {
                return "Draw";
            }
        }
    }
};