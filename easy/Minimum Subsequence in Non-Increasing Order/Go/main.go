// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
func minSubsequence(nums []int) []int {
	sort.Sort(sort.Reverse(sort.IntSlice(nums)))
	var sum int = 0
	for _, num := range nums {
		sum += num
	}
	var a int = 0
	var ans []int
	for _, num := range nums {
		a += num
		if a > sum-a {
			ans = append(ans, num)
			break
		} else {
			ans = append(ans, num)
		}
	}
	return ans
}
