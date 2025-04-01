// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
func sumofDigits(n int) int {
	sum := 0
	for n > 0 {
		sum += n % 10
		n /= 10
	}
	return sum
}
func minElement(nums []int) int {
	min := nums[0]
	for i := 0; i < len(nums); i++ {
		nums[i] = sumofDigits(nums[i])
		if nums[i] < min {
			min = nums[i]
		}
	}
	return min
}