// Problem: Final Array State After K Multiplication Operations I
// Link to the problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int min = Arrays.stream(nums).min().getAsInt();
            int index = IntStream.range(0, nums.length).filter(j -> min == nums[j]).findFirst().orElse(-1);
            nums[index] = min * multiplier;
        }
        return nums;
    }
}