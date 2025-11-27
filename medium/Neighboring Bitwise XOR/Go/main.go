// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
func doesValidArrayExist(derived []int) bool {
	var ans int = 1
	for _, derive := range derived {
		ans ^= derive
	}
	if ans == 1 {
		return true
	} else {
		return false
	}
}
