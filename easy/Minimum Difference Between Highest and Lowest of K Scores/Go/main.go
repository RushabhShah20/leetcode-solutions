// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
func minimumDifference(nums []int, k int) int {
	var n int = len(nums)
	sort.Ints(nums)
	var ans int = 100001
	for i := 0; i < n-k+1; i++ {
		ans = min(ans, nums[i+k-1]-nums[i])
	}
	return ans
}
