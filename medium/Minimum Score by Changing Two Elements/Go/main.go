// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
func minimizeSum(nums []int) int {
	var n int = len(nums)
	var mn1 int = 1000000001
	var mn2 int = 1000000001
	var mn3 int = 1000000001
	var mx1 int = 0
	var mx2 int = 0
	var mx3 int = 0
	for i := 0; i < n; i++ {
		if mn1 > nums[i] {
			mn3 = mn2
			mn2 = mn1
			mn1 = nums[i]
		} else if mn2 > nums[i] {
			mn3 = mn2
			mn2 = nums[i]
		} else if mn3 > nums[i] {
			mn3 = nums[i]
		}
		if mx1 < nums[i] {
			mx3 = mx2
			mx2 = mx1
			mx1 = nums[i]
		} else if mx2 < nums[i] {
			mx3 = mx2
			mx2 = nums[i]
		} else if mx3 < nums[i] {
			mx3 = nums[i]
		}
	}
	var a int = mx3 - mn1
	var b int = mx1 - mn3
	var c int = mx2 - mn2
	var ans int = min(a, min(b, c))
	return ans
}
