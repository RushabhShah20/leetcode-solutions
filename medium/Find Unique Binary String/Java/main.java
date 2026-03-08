// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
class Solution {
    public String findDifferentBinaryString(String[] nums) {
        final int n = nums.length;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++) {
            ans.append(nums[i].charAt(i) == '0' ? '1' : '0');
        }
        return ans.toString();
    }
}