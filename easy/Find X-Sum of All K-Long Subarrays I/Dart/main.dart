// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
class Solution {
  List<int> findXSum(List<int> nums, int k, int x) {
    int n = nums.length;
    List<int> ans = new List.empty(growable: true);
    Map<int, int> m = {};
    for (int i = 0; i < n; i++) {
      if (i >= k) {
        m[nums[i]] = (m[nums[i]] ?? 0) + 1;
        m[nums[i - k]] = m[nums[i - k]]! - 1;
        if (m[nums[i - k]] == 0) {
          m.remove(nums[i - k]);
        }
      } else {
        m[nums[i]] = (m[nums[i]] ?? 0) + 1;
      }
      if (i >= k - 1) {
        List<MapEntry<int, int>> v = m.entries.toList();
        v.sort((a, b) {
          if (a.value == b.value) {
            return b.key.compareTo(a.key);
          } else {
            return b.value.compareTo(a.value);
          }
        });
        int sum = 0;
        for (int j = 0; j < min(x, v.length); j++) {
          sum += v[j].key * v[j].value;
        }
        ans.add(sum);
      }
    }
    return ans;
  }

  int min(int a, int b) => a < b ? a : b;
}
