// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
class Solution {
  bool doesValidArrayExist(List<int> derived) {
    int ans = 1;
    for (final int derive in derived) {
      ans ^= derive;
    }
    if (ans == 1) {
      return true;
    } else {
      return false;
    }
  }
}
