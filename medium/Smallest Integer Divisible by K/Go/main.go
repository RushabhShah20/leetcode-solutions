// Problem: Smallest Integer Divisible by K
// Link to the problem: https://leetcode.com/problems/smallest-integer-divisible-by-k/
func smallestRepunitDivByK(k int) int {
	if k%2 == 0 || k%5 == 0 {
		return -1
	}
	if k == 1 {
		return 1
	}
	var rem int = 1
	var ans int = 1
	for rem > 0 {
		rem = ((rem * 10) + 1) % k
		ans++
		if ans > k {
			return -1
		}
	}
	return ans
}
