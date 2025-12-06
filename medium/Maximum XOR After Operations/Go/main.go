// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
func maximumXOR(nums []int) int {
	var ans int = 0
	for _, num := range nums {
		ans |= num
	}
	return ans
}
