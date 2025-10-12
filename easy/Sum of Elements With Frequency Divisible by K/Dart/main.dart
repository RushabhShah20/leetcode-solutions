// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
class Solution {
  int sumDivisibleByK(List<int> nums, int k) {
    Map<int, int> m = new Map();
    for (int num in nums) {
      if (m.containsKey(num)) {
        m[num] = m[num]! + 1;
      } else {
        m[num] = 1;
      }
    }
    int ans = 0;
    for (MapEntry<int, int> i in m.entries) {
      if (i.value % k == 0) {
        ans += (i.key * i.value);
      }
    }
    return ans;
  }
}
