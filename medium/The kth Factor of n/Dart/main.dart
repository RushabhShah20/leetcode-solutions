// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
class Solution {
  int kthFactor(int n, int k) {
    List<int> a = new List.empty(growable: true);
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        a.add(i);
      }
    }
    if (a.length < k) {
      return -1;
    } else {
      return a[k - 1];
    }
  }
}
