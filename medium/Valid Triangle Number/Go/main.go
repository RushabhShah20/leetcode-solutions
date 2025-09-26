// Problem: Valid Triangle Number
// Link to the problem: https://leetcode.com/problems/valid-triangle-number/
func triangleNumber(nums []int) int {
	var ans int = 0
	if len(nums) < 3 {
		return ans
	}
	sort.Ints(nums)
	for i := len(nums) - 1; i > 1; i-- {
		var r int = i - 1
		var l int = 0
		for l < r {
			var sum = nums[l] + nums[r]
			if sum > nums[i] {
				ans += (r - l)
				r--
			} else {
				l++
			}
		}
	}
	return ans
}
