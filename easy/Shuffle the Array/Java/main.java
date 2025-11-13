// Problem: Shuffle the Array
// Link to the problem: https://leetcode.com/problems/shuffle-the-array/
class Solution {
    public int[] shuffle(int[] nums, int n) {
        for (int i = n; i < 2 * n; i++) {
            nums[i] = nums[i] << 10;
            nums[i] = nums[i] | nums[i - n];
        }
        int m = n;
        for (int i = 0; i < 2 * n; i = i + 2) {
            nums[i] = nums[m] & 1023;
            nums[i + 1] = nums[m++] >> 10;
        }
        return nums;
    }
}