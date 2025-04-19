// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
func checkString(s string) bool {
	var ans bool = true
	var count int = 0
	for i := 0; i < len(s); i++ {
		if s[i] == 'b' {
			ans = true
			count = 1
		}
		if s[i] == 'a' && count == 1 {
			ans = false
			break
		}
	}
	return ans
}
