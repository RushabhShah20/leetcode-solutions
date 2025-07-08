// Problem: Arranging Coins
// Link to the problem: https://leetcode.com/problems/arranging-coins/
func arrangeCoins(n int) int {
	var low int = 0
	var high int = n
	var ans int = 0
	for low <= high {
		var mid int64 = int64(low + (high-low)/2)
		var sum int64 = mid * (mid + 1) / 2
		if sum == int64(n) {
			return int(mid)
		} else if sum < int64(n) {
			ans = int(mid)
			low = int(mid + 1)
		} else {
			high = int(mid - 1)
		}
	}
	return ans
}
