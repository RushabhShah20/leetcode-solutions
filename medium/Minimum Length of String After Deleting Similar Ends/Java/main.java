// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
class Solution {
    public int minimumLength(String s) {
        int n = s.length(), i = 0, j = n - 1;
        while (i < j && s.charAt(i) == s.charAt(j)) {
            char c = s.charAt(i);
            while (i <= j && s.charAt(i) == c) {
                i++;
            }
            while (i <= j && s.charAt(j) == c) {
                j--;
            }
        }
        final int ans = j - i + 1;
        return ans;
    }
}