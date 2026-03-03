// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
class Solution {
    public char findKthBit(int n, int k) {
        if (n == 1) {
            return '0';
        }
        final int x = (1 << n) - 1, m = x / 2 + 1;
        if (k == m) {
            return '1';
        }
        if (k < m) {
            return findKthBit(n - 1, k);
        }
        if (findKthBit(n - 1, x - k + 1) == '0') {
            return '1';
        }
        return '0';
    }
}