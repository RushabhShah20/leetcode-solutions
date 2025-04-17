// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
func sumOfSquares(nums []int) int {
	ans := 0
	for i := 0; i < len(nums); i++ {
		if len(nums)%(i+1) == 0 {
			ans += (nums[i] * nums[i])
		}
	}
	return ans
}