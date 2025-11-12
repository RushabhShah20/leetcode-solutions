// Problem: Calculate Delayed Arrival Time
// Link to the problem: https://leetcode.com/problems/calculate-delayed-arrival-time/
func findDelayedArrivalTime(arrivalTime int, delayedTime int) int {
	return (arrivalTime + delayedTime) % 24
}