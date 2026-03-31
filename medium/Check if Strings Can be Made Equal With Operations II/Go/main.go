// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
func checkStrings(s1 string, s2 string) bool {
	var n int = len(s1)
	var x []int = make([]int, 52)
	var y []int = make([]int, 52)
	for i := 0; i < n; i++ {
		if i%2 == 0 {
			x[s1[i]-'a']++
			y[s2[i]-'a']++
		} else {
			x[s1[i]-'a'+26]++
			y[s2[i]-'a'+26]++
		}
	}
	for i := 0; i < 52; i++ {
		if x[i] != y[i] {
			return false
		}
	}
	return true
}
