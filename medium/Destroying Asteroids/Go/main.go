// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
func asteroidsDestroyed(mass int, asteroids []int) bool {
	var n int = len(asteroids)
	var x int64 = int64(mass)
	sort.Ints(asteroids)
	for i := 0; i < n; i++ {
		if int64(asteroids[i]) > x {
			return false
		}
		x += int64(asteroids[i])
	}
	return true
}
