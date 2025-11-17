// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
func abs(x int) int {
	if x <= 0 {
		return -x
	} else {
		return x
	}
}
func kLengthApart(nums []int, k int) bool {
	var pos []int
	for i := 0; i < len(nums); i++ {
		if nums[i] == 1 {
			pos = append(pos, i)
		}
	}
	var minDiff int = 1000000000
	if len(pos) == 0 {
		return true
	} else {
		for i := 1; i < len(pos); i++ {
			minDiff = min(minDiff, abs(pos[i]-pos[i-1]-1))
		}
		if minDiff < k {
			return false
		} else {
			return true
		}
	}
}
