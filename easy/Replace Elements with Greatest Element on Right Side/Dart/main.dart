// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
  List<int> replaceElements(List<int> arr) {
    List<int> ans = new List.empty(growable: true);
    ans.add(-1);
    int max = -1;
    if (arr.length == 1) {
      return ans;
    } else {
      for (int i = arr.length - 1; i >= 1; i--) {
        if (max < arr[i]) {
          max = arr[i];
        }
        ans.add(max);
      }
      return ans.reversed.toList();
    }
  }
}
