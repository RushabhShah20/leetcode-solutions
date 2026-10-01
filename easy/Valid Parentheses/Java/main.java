// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
class Solution {
    public boolean isValid(String s) {
        final int n = s.length();
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[') {
                st.push(s.charAt(i));
            } else {
                if (st.empty()) {
                    return false;
                }
                final char x = st.firstElement(), y = s.charAt(i);
                if ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        final boolean ans = st.empty();
        return ans;
    }
}