// Problem: Trionic Array I
// Link to the problem: https://leetcode.com/problems/trionic-array-i/
func isTrionic(nums []int) bool {
	var n int = len(nums)
	var i int = 0
	var p int = 0
	var q int = 0
	for i < n-1 && nums[i+1] > nums[i] {
		i++
	}
	p = i
	for i < n-1 && nums[i+1] < nums[i] {
		i++
	}
	q = i
	for i < n-1 && nums[i+1] > nums[i] {
		i++
	}
	if i == n-1 {
		if p != 0 && q != 0 && p != n-1 && q != n-1 {
			return true
		} else {
			return false
		}
	}
	return false
}
