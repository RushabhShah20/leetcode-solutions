// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
class Solution {
  int maxFrequencyElements(List<int> nums) {
    Map<int, int> x = new Map();
    for (int i = 0; i < nums.length; i++) {
      if (x.containsKey(nums[i])) {
        x[nums[i]] = x[nums[i]]! + 1;
      } else {
        x[nums[i]] = 1;
      }
    }
    Map<int, List<int>> y = new Map();
    for (var i in x.entries) {
      if (!y.containsKey(i.value)) {
        y[i.value] = [];
      }
      for (int j = 0; j < i.value; j++) {
        y[i.value]!.add(i.key);
      }
    }
    int maxFreq = 0;
    for (var i in y.entries) {
      maxFreq = max(maxFreq, i.key);
    }
    List<int> ans = y[maxFreq]!;
    return ans.length;
  }
}
