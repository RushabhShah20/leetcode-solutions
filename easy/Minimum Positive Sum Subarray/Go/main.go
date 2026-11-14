// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
func minimumSumSubarray(nums []int, l int, r int) int {
	var n int = len(nums)
	var z int = 100001
	for i := 0; i < n; i++ {
		var x int = 0
		for j := i; j < n; j++ {
			x += nums[j]
			var y int = j - i + 1
			if x > 0 && y >= l && y <= r {
				z = min(z, x)
			}
		}
	}
	if z == 100001 {
		return -1
	} else {
		return z
	}
}
