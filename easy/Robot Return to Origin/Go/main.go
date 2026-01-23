// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
func judgeCircle(moves string) bool {
	var y int = 0
	var x int = 0
	for _, move := range moves {
		if move == 'U' {
			y++
		}
		if move == 'D' {
			y--
		}
		if move == 'R' {
			x++
		}
		if move == 'L' {
			x--
		}
	}
	var ans bool = (x == 0 && y == 0)
	return ans
}
