// Problem: Peak Index in a Mountain Array
// Link to the problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
func peakIndexInMountainArray(arr []int) int {
	var start int = 0
	var end int = len(arr) - 1
	for start < end {
		var mid int = start + (end-start)/2
		if arr[mid] < arr[mid+1] {
			start = mid + 1
		} else {
			end = mid
		}
	}
	return start
}
