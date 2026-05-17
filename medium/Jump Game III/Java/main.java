// Problem: Jump Game III
// Link to the problem: https://leetcode.com/problems/jump-game-iii/
class Solution {
    public boolean canReach(int[] arr, int start) {
        final int n = arr.length;
        Queue<Integer> q = new LinkedList<>();
        q.add(start);
        while (!q.isEmpty()) {
            start = q.peek();
            q.remove();
            if (arr[start] == 0) {
                return true;
            }
            if (arr[start] < 0) {
                continue;
            }
            if (start + arr[start] < n) {
                q.add(start + arr[start]);
            }
            if (start - arr[start] >= 0) {
                q.add(start - arr[start]);
            }
            arr[start] *= -1;
        }
        return false;
    }
}