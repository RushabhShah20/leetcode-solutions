// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
func numberOfPairs(points [][]int) int {
	var ans int = 0
	for i := 0; i < len(points); i++ {
		for j := 0; j < len(points); j++ {
			if i != j {
				var x1 int = points[i][0]
				var y1 int = points[i][1]
				var x2 int = points[j][0]
				var y2 int = points[j][1]
				if (x1 <= x2) && (y1 >= y2) {
					var z bool = true
					for k := 0; k < len(points); k++ {
						var x int = points[k][0]
						var y int = points[k][1]
						if i != k && j != k {
							if ((x1 <= x) && (x2 >= x)) && ((y1 >= y) && (y2 <= y)) {
								z = false
								break
							}
						}
					}
					if z == true {
						ans++
					}
				}
			}
		}
	}
	return ans
}
