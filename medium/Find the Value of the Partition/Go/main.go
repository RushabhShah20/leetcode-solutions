// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
func findValueOfPartition(nums []int) int {
	sort.Ints(nums)
	var ans int = 1000000000
	var n int = len(nums)
	for i := 0; i < n-1; i++ {
		ans = min(ans, nums[i+1]-nums[i])
	}
	return ans
}
