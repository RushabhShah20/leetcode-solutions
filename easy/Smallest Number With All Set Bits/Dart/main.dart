// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
class Solution {
  List<int> toBinary(int n) {
    List<int> ans = List.empty(growable: true);
    while (n > 0) {
      ans.add(n % 2);
      n ~/= 2;
    }
    return ans;
  }

  int smallestNumber(int n) {
    List<int> binary = toBinary(n);
    List<int> a = new List.filled(binary.length, 0);
    for (int i = 0; i < a.length; i++) {
      a[i] = 1;
    }
    int ans = 0;
    for (int i = 0; i < a.length; i++) {
      ans += ((pow(2, i).toInt()) * a[i]);
    }
    return ans;
  }
}
