// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
func findMaxConsecutiveOnes(nums []int) int {
	var ans int = 0
	var count int = 0
	for i := 0; i < len(nums); i++ {
		if nums[i] == 1 {
			count++
			ans = max(ans, count)
		} else {
			count = 0
		}
	}
	return ans
}
