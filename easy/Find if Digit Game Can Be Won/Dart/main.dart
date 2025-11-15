// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
class Solution {
  bool canAliceWin(List<int> nums) {
    int x = 0;
    int y = 0;
    for (int num in nums) {
      if (num ~/ 10 == 0) {
        x += num;
      } else {
        y += num;
      }
    }
    return x != y;
  }
}
