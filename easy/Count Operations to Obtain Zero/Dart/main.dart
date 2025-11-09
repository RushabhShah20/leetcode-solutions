// Problem: Count Operations to Obtain Zero
// Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
class Solution {
  int countOperations(int num1, int num2) {
    int ans = 0, a = max(num1, num2), b = min(num1, num2);
    while (a > 0 && b > 0) {
      ans += (a ~/ b);
      a %= b;
      int temp = a;
      a = b;
      b = temp;
    }
    return ans;
  }
}
