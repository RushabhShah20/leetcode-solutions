// Problem: Kth Missing Positive Number
// Link to the problem: https://leetcode.com/problems/kth-missing-positive-number/
class Solution {
    public int findKthPositive(int[] arr, int k) {
        final int n = arr.length;
        int l = 0, r = n, m;
        while (l < r) {
            m = (l + r) / 2;
            if (arr[m] - 1 - m < k) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return l + k;
    }
}