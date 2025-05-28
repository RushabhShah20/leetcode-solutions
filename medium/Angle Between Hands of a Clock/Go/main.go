// Problem: Angle Between Hands of a Clock
// Link to the problem: https://leetcode.com/problems/angle-between-hands-of-a-clock/
func Abs(x, y float64) float64 {
	if x < y {
		return y - x
	}
	return x - y
}
func angleClock(hour int, minutes int) float64 {
	var hour_angle float64 = float64(0.5) * float64(hour*60+minutes)
	var minute_angle float64 = float64(6 * minutes)
	var angle = Abs(hour_angle, minute_angle)
	angle = min(360-angle, angle)
	return angle
}
