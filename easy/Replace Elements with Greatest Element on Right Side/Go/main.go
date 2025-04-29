// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
package main

func reverseArray(arr []int) []int {
	for i, j := 0, len(arr)-1; i < j; i, j = i+1, j-1 {
		arr[i], arr[j] = arr[j], arr[i]
	}
	return arr
}
func replaceElements(arr []int) []int {
	var ans []int
	ans = append(ans, -1)
	var max int = -1
	if len(arr) == 1 {
		return ans
	} else {
		for i := len(arr) - 1; i >= 1; i-- {
			if max < arr[i] {
				max = arr[i]
			}
			ans = append(ans, max)
		}
		reverseArray(ans)
		return ans
	}
}
