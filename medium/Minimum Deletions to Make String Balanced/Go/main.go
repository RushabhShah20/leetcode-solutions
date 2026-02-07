// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
func minimumDeletions(s string) int {
	var ans int = 0
	var count int = 0
	for _, c := range s {
		if c == 'b' {
			count++
		} else {
			ans = min(ans+1, count)
		}
	}
	return ans
}
