// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
func countPairs(nums []int, k int) int {
	var n int = len(nums)
	var ans int = 0
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if nums[i] == nums[j] && (i*j)%k == 0 {
				ans++
			}
		}
	}
	return ans
}
