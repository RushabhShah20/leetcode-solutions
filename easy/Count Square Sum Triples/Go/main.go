// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
func countTriples(n int) int {
	var ans int = 0
	for i := 1; i <= n; i++ {
		var x int = i * i
		var l int = 1
		var r int = i - 1
		for l < r {
			var sum int = l*l + r*r
			if sum == x {
				ans += 2
				l++
				r--
			} else if sum < x {
				l++
			} else {
				r--
			}
		}
	}
	return ans
}
