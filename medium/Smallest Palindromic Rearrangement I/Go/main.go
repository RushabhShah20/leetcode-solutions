// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
func smallestPalindrome(s string) string {
	var n int = len(s)
	var ans []byte = []byte(s)
	var a []int = make([]int, 26)
	for i := 0; i < n/2; i++ {
		a[ans[i]-'a']++
	}
	var l int = 0
	var r int = n - 1
	for i := 0; i < 26; i++ {
		for a[i] > 0 {
			var c byte = byte('a' + i)
			ans[l] = c
			ans[r] = c
			l++
			r--
			a[i]--
		}
	}
	return string(ans)
}
