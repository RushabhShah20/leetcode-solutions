// Problem: Water Bottles
// Link to the problem: https://leetcode.com/problems/water-bottles/
func numWaterBottles(numBottles int, numExchange int) int {
	var ans int = numBottles
	for numBottles >= numExchange {
		var x int = numBottles / numExchange
		var y int = numBottles % numExchange
		numBottles = x + y
		ans += x
	}
	return ans
}
