// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
class Solution {
    public int[] findIndices(int[] nums, int indexDifference, int valueDifference) {
        int[] ans = new int[2];
        Arrays.fill(ans, -1);
        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < nums.length; j++) {
                if ((Math.abs(i - j) >= indexDifference) && (Math.abs(nums[i] - nums[j]) >= valueDifference)) {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }
}