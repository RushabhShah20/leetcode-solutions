// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
class Solution {
    public List<Boolean> prefixesDivBy5(int[] nums) {
        int rem = 0;
        List<Boolean> ans = new ArrayList<>();
        for (final int num : nums) {
            rem = (2 * rem + num) % 5;
            if (rem == 0) {
                ans.add(true);
            } else {
                ans.add(false);
            }
        }
        return ans;
    }
}