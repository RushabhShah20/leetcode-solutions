// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
func maxTotalValue(nums []int, k int) int64 {
	var ans int64 = 0
	var maxELement int = nums[0]
	var minElement int = nums[0]
	for i := 1; i < len(nums); i++ {
		if maxELement < nums[i] {
			maxELement = nums[i]
		}
		if minElement > nums[i] {
			minElement = nums[i]
		}
	}
	ans = (int64(maxELement-minElement) * int64(k))
	return ans
}
