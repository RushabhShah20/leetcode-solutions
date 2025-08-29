// Problem: Airplane Seat Assignment Probability
// Link to the problem: https://leetcode.com/problems/airplane-seat-assignment-probability/
func nthPersonGetsNthSeat(n int) float64 {
	if n == 1 {
		return 1
	} else {
		return 0.5
	}
}
