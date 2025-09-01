// Problem: Three Consecutive Odds
// Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
func threeConsecutiveOdds(arr []int) bool {
	var count int = 0
	for i := 0; i < len(arr); i++ {
		if arr[i]%2 == 0 {
			count = 0
		} else {
			count++
			if count == 3 {
				return true
			}
		}
	}
	return false
}
