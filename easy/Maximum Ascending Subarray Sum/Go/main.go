// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
func maxAscendingSum(nums []int) int {
	var ans int = 0
	var sum int = nums[0]
	for i := 1; i < len(nums); i++ {
		if nums[i] > nums[i-1] {
			sum += nums[i]
		} else {
			ans = max(ans, sum)
			sum = nums[i]
		}
	}
	ans = max(ans, sum)
	return ans
}
