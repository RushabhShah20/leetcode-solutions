// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
func sumCounts(nums []int) int {
	var n int = len(nums)
	var ans int = 0
	for i := 0; i < n; i++ {
		var s map[int]bool = make(map[int]bool)
		for j := i; j < n; j++ {
			s[nums[j]] = true
			ans += len(s) * len(s)
		}
	}
	return ans
}
