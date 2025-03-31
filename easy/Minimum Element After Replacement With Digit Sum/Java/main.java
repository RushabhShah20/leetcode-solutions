// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/

class Solution {
    public int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public int minElement(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            nums[i] = digitSum(nums[i]);
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        return min;
    }
}