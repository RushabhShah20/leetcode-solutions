// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
func numOfSubarrays(arr []int) int {
	var n int = len(arr)
	var ans int = 0
	var x int = 0
	var y int = 1
	var z int = 0
	for i := 0; i < n; i++ {
		var m int = 1000000007
		z += arr[i]
		if (z & 1) > 0 {
			ans = (ans + y) % m
			x++
		} else {
			ans = (ans + x) % m
			y++
		}
	}
	return ans
}
