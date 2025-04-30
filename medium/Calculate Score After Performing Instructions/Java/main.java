// Problem: Calculate Score After Performing Instructions
// Link to the problem: https://leetcode.com/problems/calculate-score-after-performing-instructions/
class Solution {
    public long calculateScore(String[] instructions, int[] values) {
        long ans = 0;
        boolean[] visited = new boolean[values.length];
        Arrays.fill(visited, false);
        int i = 0;
        while (i >= 0 && i < instructions.length && !visited[i]) {
            if (instructions[i].equals("jump")) {
                visited[i] = true;
                i += values[i];
            } else if (instructions[i].equals("add")) {
                visited[i] = true;
                ans += values[i];
                i++;
            }
        }
        return ans;
    }
}