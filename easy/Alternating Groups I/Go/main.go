// Problem: Alternating Groups I
// Link to the problem: https://leetcode.com/problems/alternating-groups-i/
func numberOfAlternatingGroups(colors []int) int {
	var ans int = 0
	for i := 1; i < len(colors)-1; i++ {
		if colors[i] != colors[i-1] && colors[i] != colors[i+1] {
			ans++
		}
	}
	if colors[0] != colors[1] && colors[0] != colors[len(colors)-1] {
		ans++
	}
	if colors[len(colors)-1] != colors[len(colors)-2] && colors[len(colors)-1] != colors[0] {
		ans++
	}
	return ans
}
