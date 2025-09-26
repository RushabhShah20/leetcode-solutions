// Problem: Valid Triangle Number
// Link to the problem: https://leetcode.com/problems/valid-triangle-number/
class Solution {
    public int triangleNumber(int[] nums) {
        int ans = 0;
        if (nums.length < 3) {
            return ans;
        }
        Arrays.sort(nums);
        for (int i = nums.length - 1; i > 1; i--) {
            int r = i - 1;
            int l = 0;
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum > nums[i]) {
                    ans += (r - l);
                    r--;
                } else {
                    l++;
                }
            }
        }
        return ans;
    }
}