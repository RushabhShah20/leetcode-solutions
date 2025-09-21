// Problem: Bitwise OR of Even Numbers in an Array
// Link to the problem: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/
func evenNumberBitwiseORs(nums []int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		if nums[i]%2 == 0 {
			ans |= nums[i]
		}
	}
	return ans
}
