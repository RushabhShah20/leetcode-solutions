// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
func Abs(x, y float64) float64 {
	if x < y {
		return y - x
	}
	return x - y
}
func angleClock(hour int, minutes int) float64 {
	var x float64 = float64(0.5) * float64(hour*60+minutes)
	var y float64 = float64(6 * minutes)
	var z float64 = Abs(x, y)
	var ans float64 = min(360-z, z)
	return ans
}
