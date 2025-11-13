// Problem: Monotonic Array
// Link to the problem: https://leetcode.com/problems/monotonic-array/
package main

func isMonotonic(nums []int) bool {
	var len int = len(nums)
	if nums[len-1] >= nums[0] {
		for i := 1; i < len; i++ {
			if nums[i] < nums[i-1] {
				return false
			}
		}
	} else {
		for i := 0; i < len-1; i++ {
			if nums[i] < nums[i+1] {
				return false
			}
		}
	}
	return true
}
