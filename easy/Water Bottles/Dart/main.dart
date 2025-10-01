// Problem: Water Bottles
// Link to the problem: https://leetcode.com/problems/water-bottles/
class Solution {
  int numWaterBottles(int numBottles, int numExchange) {
    int ans = numBottles;
    while (numBottles >= numExchange) {
      int x = numBottles ~/ numExchange;
      int y = numBottles % numExchange;
      numBottles = x + y;
      ans += x;
    }
    return ans;
  }
}
