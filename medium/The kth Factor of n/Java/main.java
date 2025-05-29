// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
class Solution {
    public int kthFactor(int n, int k) {
        List<Integer> a = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                a.add(i);
            }
        }
        if (a.size() < k) {
            return -1;
        } else {
            return a.get(k - 1);
        }
    }
}