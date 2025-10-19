// Problem: Check if Bitwise OR Has Trailing Zeros
// Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
func hasTrailingZeros(nums []int) bool {
	var count int = 0
	for _, num := range nums {
		if num%2 == 0 {
			count++
		}
		if count == 2 {
			return true
		}
	}
	return false
}
