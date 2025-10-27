// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
func numberOfBeams(bank []string) int {
	var ans int = 0
	var prev int = 0
	for _, s := range bank {
		var count int = 0
		for _, c := range s {
			if c == '1' {
				count++
			}
		}
		ans += (count * prev)
		if count > 0 {
			prev = count
		}
	}
	return ans
}
