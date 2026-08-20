// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
class Solution {
  void reverse(List<int> arr, int l, int r) {
    while (l <= r) {
      final int x = arr[l];
      arr[l] = arr[r];
      arr[r] = x;
      l++;
      r--;
    }
  }

  List<int> resultArray(List<int> nums) {
    final int n = nums.length;
    List<int> ans = new List.filled(n, 0);
    ans[0] = nums[0];
    ans[n - 1] = nums[1];
    int l = 0, r = n - 1;
    for (int i = 2; i < n; i++) {
      if (ans[l] > ans[r]) {
        l++;
        ans[l] = nums[i];
      } else {
        r--;
        ans[r] = nums[i];
      }
    }
    reverse(ans, r, n - 1);
    return ans;
  }
}
