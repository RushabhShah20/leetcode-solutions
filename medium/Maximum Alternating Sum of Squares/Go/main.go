// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
func maxAlternatingSum(nums []int) int64 {
	var n int = len(nums)
	var ans int64 = 0
	for i := 0; i < n; i++ {
		nums[i] *= nums[i]
	}
	sort.Ints(nums)
	for i := 0; i < n; i++ {
		if i < (n >> 1) {
			ans -= int64(nums[i])
		} else {
			ans += int64(nums[i])
		}
	}
	return ans
}
