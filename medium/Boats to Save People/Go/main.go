// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
func numRescueBoats(people []int, limit int) int {
	sort.Ints(people)
	var ans int = 0
	var n int = len(people)
	var i int = 0
	var j int = n - 1
	for i <= j {
		if people[i]+people[j] <= limit {
			i++
			j--
		} else {
			j--
		}
		ans++
	}
	return ans
}
