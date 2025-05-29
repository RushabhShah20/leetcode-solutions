// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
func kthFactor(n int, k int) int {
	var a []int
	for i := 1; i <= n; i++ {
		if n%i == 0 {
			a = append(a, i)
		}
	}
	if len(a) < k {
		return -1
	} else {
		return a[k-1]
	}
}
