// Problem: Number of Visible People in a Queue
// Link to the problem: https://leetcode.com/problems/number-of-visible-people-in-a-queue/
class Solution {
    public int[] canSeePersonsCount(int[] heights) {
        int n = heights.length;
        int[] ans = new int[n];
        Arrays.fill(ans, -1);
        Stack<Integer> s = new Stack<>();
        for (int i = n - 1; i >= 0; i--) {
            int count = 0;
            while (!s.empty() && heights[s.peek()] < heights[i]) {
                s.pop();
                count++;
            }
            if (!s.empty()) {
                count++;
            }
            ans[i] = count;
            s.push(i);
        }
        return ans;
    }
}