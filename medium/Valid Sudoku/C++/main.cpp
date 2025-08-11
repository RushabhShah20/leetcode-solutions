// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
class Solution
{
public:
    bool checkSubSquare(vector<vector<char>> &board, int startRow, int startCol, int endRow, int endCol)
    {
        vector<int> v;
        set<int> s;
        for (int i = startRow; i <= endRow; i++)
        {
            for (int j = startCol; j <= endCol; j++)
            {
                if (isdigit(board[i][j]))
                {
                    v.push_back(board[i][j] - '0');
                    s.insert(board[i][j] - '0');
                }
            }
        }
        if (v.size() == s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            vector<int> row;
            set<int> r;
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[i][j]))
                {
                    row.push_back(board[i][j] - '0');
                    r.insert(board[i][j] - '0');
                }
            }
            if (row.size() != r.size())
            {
                return false;
            }
        }
        for (int j = 0; j < 9; j++)
        {
            vector<int> col;
            set<int> c;
            for (int i = 0; i < 9; i++)
            {
                if (isdigit(board[i][j]))
                {
                    col.push_back(board[i][j] - '0');
                    c.insert(board[i][j] - '0');
                }
            }
            if (col.size() != c.size())
            {
                return false;
            }
        }
        if (checkSubSquare(board, 0, 0, 2, 2) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 3, 0, 5, 2) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 6, 0, 8, 2) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 0, 3, 2, 5) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 3, 3, 5, 5) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 6, 3, 8, 5) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 0, 6, 2, 8) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 3, 6, 5, 8) == false)
        {
            return false;
        }
        if (checkSubSquare(board, 6, 6, 8, 8) == false)
        {
            return false;
        }
        return true;
    }
};