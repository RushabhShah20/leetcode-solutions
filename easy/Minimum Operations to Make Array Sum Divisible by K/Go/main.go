// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
func minOperations(nums []int, k int) int {
	var sum int = 0
	for _, num := range nums {
		sum += num
	}
	var ans int = sum % k
	return ans
}
