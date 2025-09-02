// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
func minFlips(target string) int {
	var ans int = 0
	var x bool = false
	if target[0] == '1' {
		ans++
		x = true
	}
	for i := 1; i < len(target); i++ {
		if target[i] == '1' {
			if x == false {
				ans++
				x = true
			}
		} else {
			if x == true {
				ans++
				x = false
			}
		}
	}
	return ans
}
