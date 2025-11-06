// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
class Solution {
  List<List<int>> queensAttacktheKing(List<List<int>> queens, List<int> king) {
    List<List<int>> board = List.generate(8, (rowIndex) => List.filled(8, 0));
    board[king[0]][king[1]] = 2;
    for (List<int> queen in queens) {
      board[queen[0]][queen[1]] = 1;
    }
    List<List<int>> ans = new List.empty(growable: true);
    for (int i = king[0]; i < 8; i++) {
      if (board[i][king[1]] == 1) {
        ans.add([i, king[1]]);
        break;
      }
    }
    for (int i = king[0]; i >= 0; i--) {
      if (board[i][king[1]] == 1) {
        ans.add([i, king[1]]);
        break;
      }
    }
    for (int j = king[1]; j < 8; j++) {
      if (board[king[0]][j] == 1) {
        ans.add([king[0], j]);
        break;
      }
    }
    for (int j = king[1]; j >= 0; j--) {
      if (board[king[0]][j] == 1) {
        ans.add([king[0], j]);
        break;
      }
    }
    int i = king[0], j = king[1];
    while (i >= 0 && j >= 0) {
      if (board[i][j] == 1) {
        ans.add([i, j]);
        break;
      }
      i--;
      j--;
    }
    i = king[0];
    j = king[1];
    while (i >= 0 && j < 8) {
      if (board[i][j] == 1) {
        ans.add([i, j]);
        break;
      }
      i--;
      j++;
    }
    i = king[0];
    j = king[1];
    while (i < 8 && j >= 0) {
      if (board[i][j] == 1) {
        ans.add([i, j]);
        break;
      }
      i++;
      j--;
    }
    i = king[0];
    j = king[1];
    while (i < 8 && j < 8) {
      if (board[i][j] == 1) {
        ans.add([i, j]);
        break;
      }
      i++;
      j++;
    }
    return ans;
  }
}
