// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
class Solution {
  bool isdigit(String char) {
    if (char.length != 1) {
      return false;
    }
    return char.codeUnitAt(0) >= '0'.codeUnitAt(0) &&
        char.codeUnitAt(0) <= '9'.codeUnitAt(0);
  }

  bool checkSubSquare(
    List<List<String>> board,
    int startRow,
    int startCol,
    int endRow,
    int endCol,
  ) {
    List<int> v = new List.empty(growable: true);
    Set<int> s = Set();
    for (int i = startRow; i <= endRow; i++) {
      for (int j = startCol; j <= endCol; j++) {
        if (isdigit(board[i][j])) {
          v.add(int.parse(board[i][j]));
          s.add(int.parse(board[i][j]));
        }
      }
    }
    if (v.length == s.length) {
      return true;
    } else {
      return false;
    }
  }

  bool isValidSudoku(List<List<String>> board) {
    for (int i = 0; i < 9; i++) {
      List<int> row = new List.empty(growable: true);
      Set<int> r = Set();
      for (int j = 0; j < 9; j++) {
        if (isdigit(board[i][j])) {
          row.add(int.parse(board[i][j]));
          r.add(int.parse(board[i][j]));
        }
      }
      if (row.length != r.length) {
        return false;
      }
    }
    for (int j = 0; j < 9; j++) {
      List<int> col = new List.empty(growable: true);
      Set<int> c = Set();
      for (int i = 0; i < 9; i++) {
        if (isdigit(board[i][j])) {
          col.add(int.parse(board[i][j]));
          c.add(int.parse(board[i][j]));
        }
      }
      if (col.length != c.length) {
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
