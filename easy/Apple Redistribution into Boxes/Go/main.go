// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
func minimumBoxes(apple []int, capacity []int) int {
	var ans int = 0
	sort.Sort(sort.Reverse(sort.IntSlice(capacity)))
	var total int = 0
	for _, a := range apple {
		total += a
	}
	for _, c := range capacity {
		if total >= c {
			total -= c
			ans++
		} else {
			if total != 0 {
				ans++
			}
			break
		}
	}
	return ans
}
