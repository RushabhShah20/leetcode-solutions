// Problem: Minimum Value to Get Positive Step by Step Sum
// Link to the problem: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
class Solution {
    public int minStartValue(int[] nums) {
        int ans = 0, sum = 0;
        for (int num : nums) {
            sum += num;
            if (sum <= 0) {
                ans += (1 - sum);
                sum += (1 - sum);
            }
        }
        return ((ans == 0) ? (1) : (ans));
    }
}