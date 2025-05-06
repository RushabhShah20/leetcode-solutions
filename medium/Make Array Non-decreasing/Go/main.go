// Problem: Make Array Non-decreasing
// Link to the problem: https://leetcode.com/problems/make-array-non-decreasing/
func maximumPossibleSize(nums []int) int {
	var ans int = 0
	var max int = math.MinInt
	for i := 0; i < len(nums); i++ {
		if nums[i] >= max {
			max = nums[i]
			ans++
		}
	}
	return ans
}
