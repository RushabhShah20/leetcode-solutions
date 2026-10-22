// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
func minOperations(nums []int) int {
	var n int = len(nums)
	if n == 1 {
		return 0
	}
	var j int = 0
	for nums[j] != 0 {
		j++
	}
	var x bool = true
	var y bool = true
	for i := 1; i < n; i++ {
		var z int = nums[(i+j)%n]
		if z != i {
			x = false
		}
		if z != n-i {
			y = false
		}
		if !x && !y {
			return -1
		}
	}
	if x {
		return min(j, n-j+2)
	}
	return min(n-j, j+2)
}
