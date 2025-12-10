// Problem: Count the Number of Computer Unlocking Permutations
// Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
class Solution {
  int countPermutations(List<int> complexity) {
    int n = complexity.length;
    int ans = 1, mod = 1000000007;
    for (int i = 1; i < n; i++) {
      if (complexity[i] <= complexity[0]) {
        return 0;
      } else {
        ans = ((ans * i) % mod);
      }
    }
    return ans;
  }
}
