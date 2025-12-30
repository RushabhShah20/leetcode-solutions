// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
func getAverages(nums []int, k int) []int {
	var n int = len(nums)
	var m int = (2 * k) + 1
	var ans []int = make([]int, n)
	for i := 0; i < n; i++ {
		ans[i] = -1
	}
	var sum int64 = 0
	for i := 0; i < n; i++ {
		if i >= m {
			sum += int64(nums[i])
			sum -= int64(nums[i-m])
		} else {
			sum += int64(nums[i])
		}
		if i >= m-1 {
			ans[i-k] = int(sum / int64(m))
		}
	}
	return ans
}
