// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
public class Solution
{
    public bool checkSubSquare(char[][] board, int startRow, int startCol, int endRow, int endCol)
    {
        List<int> v = new List<int>();
        HashSet<int> s = new HashSet<int>();
        for (int i = startRow; i <= endRow; i++)
        {
            for (int j = startCol; j <= endCol; j++)
            {
                if (char.IsDigit(board[i][j]))
                {
                    v.Add(board[i][j] - '0');
                    s.Add(board[i][j] - '0');
                }
            }
        }
        if (v.Count() == s.Count())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public bool IsValidSudoku(char[][] board)
    {
        for (int i = 0; i < 9; i++)
        {
            List<int> row = new List<int>();
            HashSet<int> r = new HashSet<int>();
            for (int j = 0; j < 9; j++)
            {
                if (char.IsDigit(board[i][j]))
                {
                    row.Add(board[i][j] - '0');
                    r.Add(board[i][j] - '0');
                }
            }
            if (row.Count() != r.Count())
            {
                return false;
            }
        }
        for (int j = 0; j < 9; j++)
        {
            List<int> col = new List<int>();
            HashSet<int> c = new HashSet<int>();
            for (int i = 0; i < 9; i++)
            {
                if (char.IsDigit(board[i][j]))
                {
                    col.Add(board[i][j] - '0');
                    c.Add(board[i][j] - '0');
                }
            }
            if (col.Count() != c.Count())
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
}