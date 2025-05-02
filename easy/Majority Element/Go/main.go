// Problem: Majority Element
// Link to the problem: https://leetcode.com/problems/majority-element/
package main

func majorityElement(nums []int) int {
	var element int = -1
	var count int = 0
	for i := 0; i < len(nums); i++ {
		if count == 0 {
			element = nums[i]
		}
		if element == nums[i] {
			count += 1
		} else {
			count += -1
		}
	}
	return element
}
