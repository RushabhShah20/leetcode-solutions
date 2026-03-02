// Problem: Count Good Triplets
// Link to the problem: https://leetcode.com/problems/count-good-triplets/
func abs(x int) int {
	if x < 0 {
		return -1 * x
	} else {
		return x
	}
}
func countGoodTriplets(arr []int, a int, b int, c int) int {
	var n int = len(arr)
	var ans int = 0
	for i := 0; i < n-2; i++ {
		for j := i + 1; j < n-1; j++ {
			for k := j + 1; k < n; k++ {
				if abs(arr[i]-arr[j]) > a {
					continue
				}
				if abs(arr[j]-arr[k]) > b {
					continue
				}
				if abs(arr[i]-arr[k]) > c {
					continue
				}
				ans++
			}
		}
	}
	return ans
}
