// Problem: Find Lucky Integer in an Array
// Link to the problem: https://leetcode.com/problems/find-lucky-integer-in-an-array/
class Solution {
  int findLucky(List<int> arr) {
    Map<int, int> m = new Map();
    for (int i = 0; i < arr.length; i++) {
      m[arr[i]] = (m[arr[i]] ?? 0) + 1;
    }
    List<int> a = new List.empty(growable: true);
    for (var i in m.entries) {
      if (i.key == i.value) {
        a.add(i.key);
      }
    }
    return a.length == 0
        ? -1
        : a.reduce((curr, next) => curr > next ? curr : next);
  }
}
