// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
func xorBeauty(nums []int) int {
	var ans int = 0
	for _, num := range nums {
		ans ^= num
	}
	return ans
}
