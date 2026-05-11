// Problem: Separate the Digits in an Array
// Link to the problem: https://leetcode.com/problems/separate-the-digits-in-an-array/
class Solution {
    public int[] separateDigits(int[] nums) {
        final int n = nums.length;
        List<Integer> ans = new ArrayList<>();
        for (int i = n - 1; i >= 0; i--) {
            int x = nums[i];
            while (x > 0) {
                ans.add(x % 10);
                x /= 10;
            }
        }
        Collections.reverse(ans);
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}