// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
func maximumCount(nums []int) int {
	var n int = len(nums)
	var start int = 0
	var end int = n - 1
	var maxNeg int = -1
	var minPos int = n
	for start <= end {
		var mid int = start + (end-start)/2
		if nums[mid] > 0 {
			minPos = mid
			end = mid - 1
		} else {
			start = mid + 1
		}
	}
	start = 0
	end = n - 1
	for start <= end {
		var mid int = start + (end-start)/2
		if nums[mid] < 0 {
			maxNeg = mid
			start = mid + 1
		} else {
			end = mid - 1
		}
	}
	maxNeg += 1
	minPos = n - minPos
	var ans int = max(maxNeg, minPos)
	return ans
}
