// Problem: Minimum Operations to Convert All Elements to Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/
class Solution {
    public int minOperations(int[] nums) {
        int ans = 0, n = nums.length;
        Stack<Integer> s = new Stack<>();
        for (int num : nums) {
            while (!s.empty() && s.peek() > num) {
                s.pop();
            }
            if (num == 0) {
                continue;
            }
            if (s.empty() || s.peek() < num) {
                ans++;
                s.push(num);
            }
        }
        return ans;
    }
}