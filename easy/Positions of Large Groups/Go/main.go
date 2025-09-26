// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
func largeGroupPositions(s string) [][]int {
	var ans [][]int
	var count int = 1
	for i := 1; i < len(s); i++ {
		if s[i] == s[i-1] {
			count++
		} else {
			if count >= 3 {
				ans = append(ans, []int{i - count, i - 1})
			}
			count = 1
		}
	}
	if count >= 3 {
		ans = append(ans, []int{len(s) - count, len(s) - 1})
	}
	return ans
}
