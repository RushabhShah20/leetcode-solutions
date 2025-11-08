// Problem: Minimum Value to Get Positive Step by Step Sum
// Link to the problem: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
func minStartValue(nums []int) int {
	var ans int = 0
	var sum int = 0
	for _, num := range nums {
		sum += num
		if sum <= 0 {
			ans += (1 - sum)
			sum += (1 - sum)
		}
	}
	if ans == 0 {
		return 1
	} else {
		return ans
	}
}
