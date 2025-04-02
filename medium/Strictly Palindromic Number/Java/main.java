// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
class Solution {
    public long nInary(long n, int b) {
        long result = 0;
        long multiplier = 1;
        while (n > 0) {
            long remainder = n % b;
            result += remainder * multiplier;
            n /= b;
            multiplier *= 10;
        }
        return result;
    }

    public boolean isPalindrome(long n) {
        String str = Long.toString(n);
        int len = str.length();
        for (int i = 0; i < len / 2; i++) {
            if (str.charAt(i) != str.charAt(len - i - 1)) {
                return false;
            }
        }
        return true;
    }

    public boolean isStrictlyPalindromic(int n) {
        boolean ans = false;
        for (int i = 2; i <= n - 2; i++) {
            long num = nInary(n, i);
            if (isPalindrome(num)) {
                ans = true;
            } else {
                ans = false;
                break;
            }
        }
        return ans;
    }
}
