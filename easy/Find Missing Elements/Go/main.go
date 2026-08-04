// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
func findMissingElements(nums []int) []int {
	var n int = len(nums)
	var mn int = 101
	var mx int = 1
	for i := 0; i < n; i++ {
		mn = min(mn, nums[i])
		mx = max(mx, nums[i])
	}
	var m int = mx - mn + 1
	var a []int = make([]int, m)
	for i := 0; i < n; i++ {
		a[nums[i]-mn]++
	}
	var ans []int
	for i := 0; i < m; i++ {
		if a[i] == 0 {
			ans = append(ans, i+mn)
		}
	}
	return ans
}
