// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
package main

func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func leftRightDifference(nums []int) []int {
	var ans []int = make([]int, len(nums))
	var left []int = make([]int, len(nums))
	var right []int = make([]int, len(nums))
	var sum int = 0
	for i := 0; i < len(nums); i++ {
		left[i] = sum
		sum += nums[i]
	}
	sum = 0
	for i := len(nums) - 1; i >= 0; i-- {
		right[i] = sum
		sum += nums[i]
	}
	for i := 0; i < len(nums); i++ {
		ans[i] = Abs(left[i], right[i])
	}
	return ans
}
