// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
class Solution {
  int xorAllNums(List<int> nums1, List<int> nums2) {
    int m = nums1.length, n = nums2.length;
    if (m % 2 == 0) {
      if (n % 2 == 0) {
        return 0;
      } else {
        int ans = 0;
        for (int num in nums1) {
          ans ^= num;
        }
        return ans;
      }
    } else {
      if (n % 2 == 0) {
        int ans = 0;
        for (int num in nums2) {
          ans ^= num;
        }
        return ans;
      } else {
        int x = 0, y = 0;
        for (int num in nums1) {
          x ^= num;
        }
        for (int num in nums2) {
          y ^= num;
        }
        int ans = x ^ y;
        return ans;
      }
    }
  }
}
