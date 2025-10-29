// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
func toBinary(n int) []int {
	var ans []int
	for n > 0 {
		ans = append(ans, n%2)
		n /= 2
	}
	return ans
}
func smallestNumber(n int) int {
	var binary []int = toBinary(n)
	var a []int = make([]int, len(binary))
	for i := 0; i < len(a); i++ {
		a[i] = 1
	}
	var ans int = 0
	for i := 0; i < len(a); i++ {
		ans += (int(math.Pow(float64(2), float64(i))) * a[i])
	}
	return ans
}
