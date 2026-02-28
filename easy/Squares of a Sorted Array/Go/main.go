// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
func sortedSquares(nums []int) []int {
	var n int = len(nums)
	var ans []int = make([]int, n)
	var l int = 0
	var r int = n - 1
	var i int = n - 1
	for l <= r {
		var x int = nums[l] * nums[l]
		var y int = nums[r] * nums[r]
		if x > y {
			ans[i] = x
			l++
		} else {
			ans[i] = y
			r--
		}
		i--
	}
	return ans
}
