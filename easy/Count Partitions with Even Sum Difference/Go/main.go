// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
func countPartitions(nums []int) int {
	var sum int = 0
	var ans int = len(nums) - 1
	for _, num := range nums {
		sum += num
	}
	if sum%2 == 0 {
		return ans
	} else {
		return 0
	}
}
