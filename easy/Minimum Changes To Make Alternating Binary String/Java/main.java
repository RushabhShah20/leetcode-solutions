// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
class Solution {
    public int minOperations(String s) {
        final int n = s.length();
        int ansEven = 0, ansOdd = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s.charAt(i) == '0') {
                    ansEven++;
                } else {
                    ansOdd++;
                }
            } else {
                if (s.charAt(i) == '1') {
                    ansEven++;
                } else {
                    ansOdd++;
                }
            }
        }
        final int ans = Math.min(ansEven, ansOdd);
        return ans;
    }
}