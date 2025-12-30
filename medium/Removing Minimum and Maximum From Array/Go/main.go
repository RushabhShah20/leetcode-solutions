// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
func minimumDeletions(nums []int) int {
	var n int = len(nums)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if nums[i] > nums[x] {
			x = i
		} else if nums[i] < nums[y] {
			y = i
		}
	}
	var a int = max(x, y) + 1
	var b int = n - min(x, y)
	var c int = (min(x, y) + 1) + (n - max(x, y))
	var ans int = min(a, min(b, c))
	return ans
}
