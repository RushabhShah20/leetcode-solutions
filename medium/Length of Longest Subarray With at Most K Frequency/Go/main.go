// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
func maxSubarrayLength(nums []int, k int) int {
	var n int = len(nums)
	var i int = 0
	var j int = 0
	var ans int = 0
	var m map[int]int = make(map[int]int)
	for j < n {
		m[nums[j]]++
		for m[nums[j]] > k && i < n {
			m[nums[i]]--
			i++
		}
		ans = max(ans, j-i+1)
		j++
	}
	return ans
}
