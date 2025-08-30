// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
class Solution {
    public boolean checkSubSquare(char[][] board, int startRow, int startCol, int endRow, int endCol) {
        List<Integer> v = new ArrayList<>();
        Set<Integer> s = new HashSet<>();
        for (int i = startRow; i <= endRow; i++) {
            for (int j = startCol; j <= endCol; j++) {
                if (Character.isDigit(board[i][j])) {
                    v.add(board[i][j] - '0');
                    s.add(board[i][j] - '0');
                }
            }
        }
        if (v.size() == s.size()) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isValidSudoku(char[][] board) {
        for (int i = 0; i < 9; i++) {
            List<Integer> row = new ArrayList<>();
            Set<Integer> r = new HashSet<>();
            for (int j = 0; j < 9; j++) {
                if (Character.isDigit(board[i][j])) {
                    row.add(board[i][j] - '0');
                    r.add(board[i][j] - '0');
                }
            }
            if (row.size() != r.size()) {
                return false;
            }
        }
        for (int j = 0; j < 9; j++) {
            List<Integer> col = new ArrayList<>();
            Set<Integer> c = new HashSet<>();
            for (int i = 0; i < 9; i++) {
                if (Character.isDigit(board[i][j])) {
                    col.add(board[i][j] - '0');
                    c.add(board[i][j] - '0');
                }
            }
            if (col.size() != c.size()) {
                return false;
            }
        }
        if (checkSubSquare(board, 0, 0, 2, 2) == false) {
            return false;
        }
        if (checkSubSquare(board, 3, 0, 5, 2) == false) {
            return false;
        }
        if (checkSubSquare(board, 6, 0, 8, 2) == false) {
            return false;
        }
        if (checkSubSquare(board, 0, 3, 2, 5) == false) {
            return false;
        }
        if (checkSubSquare(board, 3, 3, 5, 5) == false) {
            return false;
        }
        if (checkSubSquare(board, 6, 3, 8, 5) == false) {
            return false;
        }
        if (checkSubSquare(board, 0, 6, 2, 8) == false) {
            return false;
        }
        if (checkSubSquare(board, 3, 6, 5, 8) == false) {
            return false;
        }
        if (checkSubSquare(board, 6, 6, 8, 8) == false) {
            return false;
        }
        return true;
    }
}