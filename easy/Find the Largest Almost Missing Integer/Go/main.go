// Problem: Find the Largest Almost Missing Integer
// Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
func largestInteger(nums []int, k int) int {
	var n int = len(nums)
	var ans int = -1
	if n == k {
		for i := 0; i < n; i++ {
			ans = max(ans, nums[i])
		}
		return ans
	}
	var a []int = make([]int, 51)
	for i := 0; i < n; i++ {
		a[nums[i]]++
	}
	if k == 1 {
		for i := 50; i >= 0; i-- {
			if a[i] == 1 {
				return i
			}
		}
		return -1
	}
	if a[nums[0]] == 1 {
		ans = max(ans, nums[0])
	}
	if a[nums[n-1]] == 1 {
		ans = max(ans, nums[n-1])
	}
	return ans
}
