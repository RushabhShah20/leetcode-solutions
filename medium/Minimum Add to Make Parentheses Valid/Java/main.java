// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
    public int minAddToMakeValid(String s) {
        int ans = 0;
        Stack<Character> st = new Stack<>();
        for (char c : s.toCharArray()) {
            if (st.empty()) {
                st.push(c);
            } else {
                if (st.peek() == '(' && c == ')') {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }
        ans = st.size();
        return ans;
    }
}