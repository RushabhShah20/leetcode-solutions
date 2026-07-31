// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
func minimumPushes(word string) int {
	var n int = len(word)
	var a []int = make([]int, 26)
	for i := 0; i < n; i++ {
		a[word[i]-'a']++
	}
	slices.SortFunc(a, func(x, y int) int {
		return cmp.Compare(y, x)
	})
	var ans int = 0
	for i := 0; i < 26; i++ {
		if i < 8 {
			ans += (1 * a[i])
		} else if i >= 8 && i < 16 {
			ans += (2 * a[i])
		} else if i >= 16 && i < 24 {
			ans += (3 * a[i])
		} else {
			ans += (4 * a[i])
		}
	}
	return ans
}
