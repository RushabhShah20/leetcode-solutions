// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
package main

func maxProduct(nums []int) int {
	var x int = 0
	var y int = 0
	for _, num := range nums {
		if num > x {
			y = x
			x = num
		} else if num > y {
			y = num
		}
	}
	var ans int = (x - 1) * (y - 1)
	return ans
}
