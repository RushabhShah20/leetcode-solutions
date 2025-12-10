// Problem: Count the Number of Computer Unlocking Permutations
// Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
func countPermutations(complexity []int) int {
	var n int = len(complexity)
	var ans int64 = 1
	var mod int64 = 1000000007
	for i := 1; i < n; i++ {
		if complexity[i] <= complexity[0] {
			return 0
		} else {
			ans = ((ans * int64(i)) % mod)
		}
	}
	return int(ans)
}
