// Problem: Maximize Y‑Sum by Picking a Triplet of Distinct X‑Values
// Link to the problem: https://leetcode.com/problems/maximize-ysum-by-picking-a-triplet-of-distinct-xvalues/
class Solution {
  int maxSumDistinctTriplet(List<int> x, List<int> y) {
    int ans = 0;
    Set<int> s = Set<int>.from(x);
    if (s.length <= 2) {
      return -1;
    } else {
      Map<int, List<int>> m = new Map();
      for (int i = 0; i < x.length; i++) {
        if (!m.containsKey(x[i])) {
          m[x[i]] = <int>[];
        }
        m[x[i]]!.add(y[i]);
      }
      Map<int, int> n = new Map();
      for (var entry in m.entries) {
        n[entry.key] = entry.value.reduce((a, b) => a > b ? a : b);
      }
      List<int> z = new List.empty(growable: true);
      for (var entry in n.entries) {
        z.add(entry.value);
      }
      for (int i = 0; i < 3; i++) {
        int maxVal = z.reduce((a, b) => a > b ? a : b);
        ans += maxVal;
        z.remove(maxVal);
      }
      return ans;
    }
  }
}
