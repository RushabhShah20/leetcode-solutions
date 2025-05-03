// Problem: Final Array State After K Multiplication Operations I
// Link to the problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
func getFinalState(nums []int, k int, multiplier int) []int {
	for i := 0; i < k; i++ {
		var min int = slices.Min(nums)
		var index int = slices.Index(nums, min)
		nums[index] = min * multiplier
	}
	return nums
}
