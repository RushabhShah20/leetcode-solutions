// Problem: Find Three Consecutive Integers That Sum to a Given Number
// Link to the problem: https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/
class Solution {
  List<int> sumOfThree(int num) {
    if (num % 3 == 0) {
      return [((num ~/ 3) - 1), (num ~/ 3), ((num ~/ 3) + 1)];
    } else {
      return [];
    }
  }
}
