// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
func sortPermutation(nums []int) int {
	var n int = len(nums)
	var ans int = -1
	for i := 0; i < n; i++ {
		if nums[i] != i {
			ans &= nums[i]
		}
	}
	if ans == -1 {
		return 0
	} else {
		return ans
	}
}
