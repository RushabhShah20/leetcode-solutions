// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
func targetIndices(nums []int, target int) []int {
	var n int = len(nums)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if nums[i] < target {
			x++
		} else if nums[i] == target {
			y++
		}
	}
	var ans []int
	for i := x; i < x+y; i++ {
		ans = append(ans, i)
	}
	return ans
}
