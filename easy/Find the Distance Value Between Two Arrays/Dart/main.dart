// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution {
  int findTheDistanceValue(List<int> arr1, List<int> arr2, int d) {
    int ans = 0;
    for (int i = 0; i < arr1.length; i++) {
      bool x = true;
      for (int j = 0; j < arr2.length; j++) {
        if (arr1[i] == arr2[j] || (arr1[i] - arr2[j]).abs() <= d) {
          x = false;
          break;
        }
      }
      if (x == true) {
        ans++;
      }
    }
    return ans;
  }
}
