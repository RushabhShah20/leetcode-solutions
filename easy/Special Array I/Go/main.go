// Problem: Special Array I
// Link to the problem: https://leetcode.com/problems/special-array-i/
func isArraySpecial(nums []int) bool {
	for i := 0; i < len(nums)-1; i++ {
		if nums[i]%2 == 0 && nums[i+1]%2 == 0 {
			return false
		}
		if nums[i]%2 != 0 && nums[i+1]%2 != 0 {
			return false
		}
	}
	return true
}
