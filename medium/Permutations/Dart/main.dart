// Problem: Permutations
// Link to the problem: https://leetcode.com/problems/permutations/
class Solution {
  void backTrack(
    List<int> nums,
    List<bool> used,
    List<int> sub,
    List<List<int>> ans,
  ) {
    if (sub.length == nums.length) {
      ans.add(new List.of(sub));
      return;
    }
    for (int i = 0; i < nums.length; i++) {
      if (used[i]) {
        continue;
      }
      used[i] = true;
      sub.add(nums[i]);
      backTrack(nums, used, sub, ans);
      sub.remove(sub.last);
      used[i] = false;
    }
  }

  List<List<int>> permute(List<int> nums) {
    List<List<int>> ans = new List.empty(growable: true);
    List<int> sub = new List.empty(growable: true);
    List<bool> used = new List.filled(nums.length, false);
    backTrack(nums, used, sub, ans);
    return ans;
  }
}
