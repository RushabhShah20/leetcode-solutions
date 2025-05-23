// Problem: Find The Original Array of Prefix Xor
// Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
func findArray(pref []int) []int {
	ans := make([]int, len(pref))
	ans[0] = pref[0]
	for i := 1; i < len(pref); i++ {
		ans[i] = pref[i] ^ pref[i-1]
	}
	return ans
}
