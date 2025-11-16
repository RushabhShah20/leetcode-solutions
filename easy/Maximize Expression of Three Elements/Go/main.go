// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
func maximizeExpressionOfThree(nums []int) int {
	var n int = len(nums)
	sort.Ints(nums)
	return nums[n-1] + nums[n-2] - nums[0]
}
