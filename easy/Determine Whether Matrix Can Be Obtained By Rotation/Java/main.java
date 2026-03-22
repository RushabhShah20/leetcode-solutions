// Problem: Determine Whether Matrix Can Be Obtained By Rotation
// Link to the problem: https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        final int n = mat.length;
        int[][] mat90 = new int[n][n], mat180 = new int[n][n], mat270 = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat90[i][j] = mat[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n / 2; i++) {
                final int temp = mat90[j][i];
                mat90[j][i] = mat90[j][n - 1 - i];
                mat90[j][n - i - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat180[i][j] = mat90[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n / 2; i++) {
                final int temp = mat180[j][i];
                mat180[j][i] = mat180[j][n - 1 - i];
                mat180[j][n - i - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat270[i][j] = mat180[j][i];
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n / 2; i++) {
                final int temp = mat270[j][i];
                mat270[j][i] = mat270[j][n - 1 - i];
                mat270[j][n - i - 1] = temp;
            }
        }
        return Arrays.deepEquals(mat, target) || Arrays.deepEquals(mat90, target) || Arrays.deepEquals(mat180, target)
                || Arrays.deepEquals(mat270, target);
    }
}