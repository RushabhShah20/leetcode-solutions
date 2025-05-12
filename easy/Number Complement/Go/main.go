// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
func toBinary(n int) []int {
	var ans []int
	for n > 0 {
		var rem int = n % 2
		ans = append(ans, rem)
		n /= 2
	}
	return ans
}
func complement(res []int) []int {
	for i := 0; i < len(res); i++ {
		if res[i] == 0 {
			res[i] = 1
		} else if res[i] == 1 {
			res[i] = 0
		}
	}
	return res
}
func findComplement(num int) int {
	var ans int = 0
	var binary []int = toBinary(num)
	var com []int = complement(binary)
	for i := 0; i < len(com); i++ {
		ans += int(math.Pow(2, float64(i))) * com[i]
	}
	return ans
}
