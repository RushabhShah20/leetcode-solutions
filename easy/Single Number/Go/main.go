// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
func singleNumber(nums []int) int {
	var ans int = 0
	for _, num := range nums {
		ans ^= num
	}
	return ans
}
