// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
func maxSum(nums []int, k int) int {
	var n int = len(nums)
	var m int64 = 1000000007
	var a []int = make([]int, 30)
	for i := 0; i < n; i++ {
		for j := 0; j < 30; j++ {
			a[j] += nums[i] >> j & 1
		}
	}
	var ans int64 = 0
	for i := 0; i < k; i++ {
		var x int64 = 0
		for j := 29; j >= 0; j-- {
			if a[j] > 0 {
				x |= 1 << j
				a[j]--
			}
		}
		ans = (ans + x*x) % m
	}
	return int(ans)
}
