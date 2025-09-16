// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func replaceNonCoprimes(nums []int) []int {
	var ans []int
	for _, num := range nums {
		ans = append(ans, num)
		for len(ans) > 1 {
			var a int = ans[len(ans)-1]
			var b int = ans[len(ans)-2]
			var g int = gcd(a, b)
			if g > 1 {
				ans = ans[:len(ans)-2]
				var lcm int64 = ((int64(a) * int64(b)) / int64(g))
				ans = append(ans, int(lcm))
			} else {
				break
			}
		}
	}
	return ans
}
