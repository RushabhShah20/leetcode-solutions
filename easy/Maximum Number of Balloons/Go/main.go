// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
func maxNumberOfBalloons(text string) int {
	var n int = len(text)
	var ans int = 100000
	var a []int = make([]int, 26)
	for i := 0; i < n; i++ {
		a[text[i]-'a']++
	}
	ans = min(ans, a[1])
	ans = min(ans, a[0])
	ans = min(ans, a[11]/2)
	ans = min(ans, a[14]/2)
	ans = min(ans, a[13])
	return ans
}
