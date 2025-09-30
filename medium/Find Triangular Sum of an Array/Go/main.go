// Problem: Find Triangular Sum of an Array
// Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
func triangularSum(nums []int) int {
	var n int = len(nums)
	for i := n - 1; i >= 0; i-- {
		for j := 0; j < i; j++ {
			nums[j] = ((nums[j] + nums[j+1]) % 10)
		}
	}
	return nums[0]
}
