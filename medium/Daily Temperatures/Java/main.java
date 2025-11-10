// Problem: Daily Temperatures
// Link to the problem: https://leetcode.com/problems/daily-temperatures/
class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] ans = new int[n];
        Arrays.fill(ans, 0);
        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < n; i++) {
            while (!s.empty() && temperatures[s.peek()] < temperatures[i]) {
                int j = s.peek();
                s.pop();
                ans[j] = i - j;
            }
            s.push(i);
        }
        return ans;
    }
}