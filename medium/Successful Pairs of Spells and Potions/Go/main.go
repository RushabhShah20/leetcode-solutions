// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
func successfulPairs(spells []int, potions []int, success int64) []int {
	var ans []int = make([]int, len(spells))
	sort.Ints(potions)
	for i := 0; i < len(spells); i++ {
		var x int = -1
		var l int = 0
		var r int = len(potions) - 1
		for l < r {
			var m int = l + (r-l)/2
			var y int64 = int64(potions[m]) * int64(spells[i])
			if y < success {
				l = m + 1
			} else {
				r = m
			}
		}
		if int64(potions[l])*int64(spells[i]) >= success {
			x = l
		}
		if x != -1 {
			ans[i] += (len(potions) - x)
		}
	}
	return ans
}
