// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
class Solution {
    public List<List<Integer>> queensAttacktheKing(int[][] queens, int[] king) {
        int[][] board = new int[8][8];
        board[king[0]][king[1]] = 2;
        for (int[] queen : queens) {
            board[queen[0]][queen[1]] = 1;
        }
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = king[0]; i < 8; i++) {
            if (board[i][king[1]] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, king[1])));
                break;
            }
        }
        for (int i = king[0]; i >= 0; i--) {
            if (board[i][king[1]] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, king[1])));
                break;
            }
        }
        for (int j = king[1]; j < 8; j++) {
            if (board[king[0]][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(king[0], j)));
                break;
            }
        }
        for (int j = king[1]; j >= 0; j--) {
            if (board[king[0]][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(king[0], j)));
                break;
            }
        }
        int i = king[0], j = king[1];
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, j)));
                break;
            }
            i--;
            j--;
        }
        i = king[0];
        j = king[1];
        while (i >= 0 && j < 8) {
            if (board[i][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, j)));
                break;
            }
            i--;
            j++;
        }
        i = king[0];
        j = king[1];
        while (i < 8 && j >= 0) {
            if (board[i][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, j)));
                break;
            }
            i++;
            j--;
        }
        i = king[0];
        j = king[1];
        while (i < 8 && j < 8) {
            if (board[i][j] == 1) {
                ans.add(new ArrayList<>(Arrays.asList(i, j)));
                break;
            }
            i++;
            j++;
        }
        return ans;
    }
}