// Problem: Smallest Stable Index I
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
func firstStableIndex(nums []int, k int) int {
	var n int = len(nums)
	var mn []int = make([]int, n)
	var mx []int = make([]int, n)
	mx[0] = nums[0]
	for i := 1; i < n; i++ {
		mx[i] = max(mx[i-1], nums[i])
	}
	mn[n-1] = nums[n-1]
	for i := n - 2; i >= 0; i-- {
		mn[i] = min(mn[i+1], nums[i])
	}
	for i := 0; i < n; i++ {
		if mx[i]-mn[i] <= k {
			return i
		}
	}
	return -1
}
