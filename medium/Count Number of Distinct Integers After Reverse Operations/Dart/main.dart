// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
class Solution {
  int rev(int n) {
    int rev = 0;
    while (n > 0) {
      rev = (rev * 10) + (n % 10);
      n ~/= 10;
    }
    return rev;
  }

  int countDistinctIntegers(List<int> nums) {
    Set<int> s = Set();
    List<int> ans = [...nums];
    for (int i = 0; i < nums.length; i++) {
      ans.add(rev(nums[i]));
    }
    for (int i = 0; i < ans.length; i++) {
      s.add(ans[i]);
    }
    return s.length;
  }
}
