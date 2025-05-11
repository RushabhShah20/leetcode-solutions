// Problem: Prime In Diagonal
// Link to the problem: https://leetcode.com/problems/prime-in-diagonal/
class Solution {
  bool isPrime(int n) {
    bool x = true;
    if (n <= 1) {
      return false;
    } else {
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
          x = false;
          break;
        }
      }
      return x;
    }
  }

  int diagonalPrime(List<List<int>> nums) {
    List<int> diagonal_elements = new List.empty(growable: true);
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums.length; j++) {
        if (i == j || i + j == nums.length - 1) {
          if (isPrime(nums[i][j])) {
            diagonal_elements.add(nums[i][j]);
          }
        }
      }
    }
    return diagonal_elements.length == 0
        ? 0
        : diagonal_elements.reduce((curr, next) => curr > next ? curr : next);
  }
}
