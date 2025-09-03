// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
class Solution {
    public String oddString(String[] words) {
        int m = words.length, n = words[0].length();
        String ans = "";
        int[][] diff = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n - 1; j++) {
                diff[i][j] = words[i].charAt(j + 1) - words[i].charAt(j);
            }
        }
        if (Arrays.equals(diff[1], diff[2])) {
            if (!Arrays.equals(diff[0], diff[1]) && !Arrays.equals(diff[0], diff[2])) {
                return words[0];
            }
        }
        for (int i = 1; i < diff.length - 1; i++) {
            if (Arrays.equals(diff[i - 1], diff[i + 1])) {
                if (!Arrays.equals(diff[i], diff[i - 1]) && !Arrays.equals(diff[i], diff[i + 1])) {
                    return words[i];
                }
            }
        }
        if (Arrays.equals(diff[words.length - 3], diff[words.length - 2])) {
            if (!Arrays.equals(diff[words.length - 1], diff[words.length - 2])
                    && !Arrays.equals(diff[words.length - 1], diff[words.length - 3])) {
                return words[words.length - 1];
            }
        }
        return ans;
    }
}