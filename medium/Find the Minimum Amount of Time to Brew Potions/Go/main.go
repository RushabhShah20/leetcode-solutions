// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
func minTime(skill []int, mana []int) int64 {
	var n int = len(skill)
	var m int = len(mana)
	var ans []int64 = make([]int64, n+1)
	for j := 0; j < m; j++ {
		for i := 0; i < n; i++ {
			ans[i+1] = max(ans[i+1], ans[i]) + (int64(mana[j]) * int64(skill[i]))
		}
		for i := n - 1; i > 0; i-- {
			ans[i] = ans[i+1] - (int64(mana[j]) * int64(skill[i]))
		}
	}
	return ans[n]
}
