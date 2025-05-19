// Problem: Two Sum II - Input Array Is Sorted
// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
func twoSum(numbers []int, target int) []int {
	var l int = 0
	var r int = len(numbers) - 1
	var nums []int = numbers
	for l < r {
		if nums[l]+nums[r] == target {
			return []int{l + 1, r + 1}
		} else if nums[l]+nums[r] < target {
			var left int = l
			var right int = r - 1
			for left < right {
				var mid int = (left + right) / 2
				if nums[mid]+nums[r] >= target {
					right = mid
				} else {
					left = mid + 1
				}
			}
			l = left
		} else {
			var left int = l + 1
			var right int = r
			for left < right {
				var mid int = (left + right + 1) / 2
				if nums[mid]+nums[l] <= target {
					left = mid
				} else {
					right = mid - 1
				}
			}
			r = right
		}
	}
	return []int{0, 0}
}
