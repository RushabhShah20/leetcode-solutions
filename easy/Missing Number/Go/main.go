// Problem: Missing Number
// Link to the problem: https://leetcode.com/problems/missing-number/
func missingNumber(nums []int) int {
	var sum int = 0
	for i := 0; i < len(nums); i++ {
		sum += nums[i]
	}
	return ((len(nums) * (len(nums) + 1)) / 2) - sum
}
