// Problem: Validate Stack Sequences
// Link to the problem: https://leetcode.com/problems/validate-stack-sequences/
class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        Stack<Integer> s = new Stack<Integer>();
        int i = 0, j = 0, n = pushed.length;
        s.push(pushed[i]);
        i++;
        while (i < n && j < n) {
            if (s.empty()) {
                s.push(pushed[i]);
                i++;
            }
            if (s.peek() == popped[j]) {
                s.pop();
                j++;
            } else {
                s.push(pushed[i]);
                i++;
            }
        }
        while (j < n) {
            if (s.peek() == popped[j]) {
                s.pop();
                j++;
            } else {
                break;
            }
        }
        if (s.empty()) {
            return true;
        } else {
            return false;
        }
    }
}