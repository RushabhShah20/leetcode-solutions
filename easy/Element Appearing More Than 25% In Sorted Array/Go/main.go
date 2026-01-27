// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
func findSpecialInteger(arr []int) int {
	var n int = len(arr)
	var m int = n / 4
	for i := 0; i < n-m; i++ {
		if arr[i] == arr[i+m] {
			return arr[i]
		}
	}
	return -1
}
