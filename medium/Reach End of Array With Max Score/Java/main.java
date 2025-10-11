// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
class Solution {
    public long findMaximumScore(List<Integer> nums) {
        long ans = 0, maxElement = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += maxElement;
            maxElement = Math.max(maxElement, (long) (nums.get(i)));
        }
        return ans;
    }
}