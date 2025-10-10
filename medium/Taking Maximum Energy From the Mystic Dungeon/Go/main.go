// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
func maximumEnergy(energy []int, k int) int {
	var n int = len(energy)
	var ans int = math.MinInt
	var dp []int = make([]int, n)
	for i := n - 1; i >= 0; i-- {
		if i >= n-k {
			dp[i] = energy[i]
		} else {
			dp[i] = energy[i] + dp[i+k]
		}
		ans = max(ans, dp[i])
	}
	return ans
}
