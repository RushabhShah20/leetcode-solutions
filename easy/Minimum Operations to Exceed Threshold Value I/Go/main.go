// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
func minOperations(nums []int, k int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		if nums[i] < k {
			ans++
		}
	}
	return ans
}