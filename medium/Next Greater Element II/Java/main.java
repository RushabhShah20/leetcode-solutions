// Problem: Next Greater Element II
// Link to the problem: https://leetcode.com/problems/next-greater-element-ii/
class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        if (n == 0) {
            return new int[] {};
        }
        int[] ans = new int[n];
        Stack<Integer> st = new Stack<>();
        for (int i = 2 * n - 1; i >= 0; --i) {
            int cur = nums[i % n];
            while (!st.empty() && st.lastElement() <= cur) {
                st.pop();
            }
            if (i < n) {
                ans[i] = st.empty() ? -1 : st.lastElement();
            }
            st.push(cur);
        }
        return ans;
    }
}