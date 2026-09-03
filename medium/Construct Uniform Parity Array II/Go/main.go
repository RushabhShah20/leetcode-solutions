// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
func uniformArray(nums1 []int) bool {
	var n int = len(nums1)
	var x bool = true
	var mn int = 1000000001
	for i := 0; i < n; i++ {
		var num int = nums1[i]
		if num&1 == 1 {
			x = false
		}
		mn = min(mn, num)
	}
	if mn&1 == 1 || x {
		return true
	} else {
		return false
	}
}
