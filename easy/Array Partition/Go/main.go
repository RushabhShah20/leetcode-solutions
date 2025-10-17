// Problem: Array Partition
// Link to the problem: https://leetcode.com/problems/array-partition/
func arrayPairSum(nums []int) int {
	var ans int = 0
	sort.Ints(nums)
	for i := 0; i < len(nums); i += 2 {
		ans += nums[i]
	}
	return ans
}
