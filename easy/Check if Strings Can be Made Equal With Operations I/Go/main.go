// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
func canBeEqual(s1 string, s2 string) bool {
	var x bool = (s1[0] == s2[0] && s1[2] == s2[2]) || (s1[0] == s2[2] && s1[2] == s2[0])
	var y bool = (s1[1] == s2[1] && s1[3] == s2[3]) || (s1[1] == s2[3] && s1[3] == s2[1])
	var ans bool = x && y
	return ans
}
