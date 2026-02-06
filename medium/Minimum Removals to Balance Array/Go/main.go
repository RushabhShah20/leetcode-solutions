// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
func minRemoval(nums []int, k int) int {
	var n int = len(nums)
	var i int = 0
	var ans int = 0
	sort.Ints(nums)
	for j := 0; j < n; j++ {
		for int64(nums[j]) > int64(nums[i])*int64(k) {
			i++
		}
		ans = max(ans, j-i+1)
	}
	ans = n - ans
	return ans
}
