// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
func missingMultiple(nums []int, k int) int {
	var n int = len(nums)
	var s map[int]bool = make(map[int]bool)
	for i := 0; i < n; i++ {
		s[nums[i]] = true
	}
	var ans int = k
	for s[ans] {
		ans += k
	}
	return ans
}
