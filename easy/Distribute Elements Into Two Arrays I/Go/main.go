// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
func reverse(arr []int, l int, r int) {
	for l <= r {
		var x int = arr[l]
		arr[l] = arr[r]
		arr[r] = x
		l++
		r--
	}
}
func resultArray(nums []int) []int {
	var n int = len(nums)
	var ans []int = make([]int, n)
	ans[0] = nums[0]
	ans[n-1] = nums[1]
	var l int = 0
	var r int = n - 1
	for i := 2; i < n; i++ {
		if ans[l] > ans[r] {
			l++
			ans[l] = nums[i]
		} else {
			r--
			ans[r] = nums[i]
		}
	}
	reverse(ans, r, n-1)
	return ans
}
