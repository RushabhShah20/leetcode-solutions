// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
func stoneGameIX(stones []int) bool {
	var n int = len(stones)
	var a int = 0
	var b int = 0
	var c int = 0
	for i := 0; i < n; i++ {
		var x int = stones[i] % 3
		if x == 1 {
			b++
		} else if x == 2 {
			c++
		} else {
			a++
		}
	}
	if a&1 == 1 {
		return (b-c) > 2 || c-b > 2
	} else {
		return b >= 1 && c >= 1
	}
}
