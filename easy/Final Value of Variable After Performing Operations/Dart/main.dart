// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
class Solution {
  int finalValueAfterOperations(List<String> operations) {
    int ans = 0;
    for (String operation in operations) {
      if (operation == "--X" || operation == "X--") {
        ans--;
      } else {
        ans++;
      }
    }
    return ans;
  }
}
