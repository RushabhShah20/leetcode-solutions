// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
func missingInteger(nums []int) int {
	var n int = len(nums)
	var s map[int]bool = make(map[int]bool, n)
	for i := 0; i < n; i++ {
		s[nums[i]] = true
	}
	var m int = 1
	for i := 1; i < n; i++ {
		if nums[i] == nums[i-1]+1 {
			m += 1
		} else {
			break
		}
	}
	var ans int = (nums[m-1] + nums[0]) * m / 2
	for s[ans] {
		ans += 1
	}
	return ans
}
