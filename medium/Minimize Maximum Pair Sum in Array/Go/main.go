// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
func minPairSum(nums []int) int {
	var n int = len(nums)
	sort.Ints(nums)
	var l int = 0
	var r int = n - 1
	var ans int = 0
	for l < r {
		ans = max(ans, nums[l]+nums[r])
		l++
		r--
	}
	return ans
}
