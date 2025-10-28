// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
func countValidSelections(nums []int) int {
	var n int = len(nums)
	var ans int = 0
	var sum int = 0
	for _, num := range nums {
		sum += num
	}
	var leftSum int = 0
	var rightSum int = sum
	for i := 0; i < n; i++ {
		if nums[i] == 0 {
			if leftSum-rightSum >= 0 && leftSum-rightSum <= 1 {
				ans++
			}
			if rightSum-leftSum >= 0 && rightSum-leftSum <= 1 {
				ans++
			}
		} else {
			leftSum += nums[i]
			rightSum -= nums[i]
		}
	}
	return ans
}
