// Problem: Water Bottles II
// Link to the problem: https://leetcode.com/problems/water-bottles-ii/
func maxBottlesDrunk(numBottles int, numExchange int) int {
	var ans int = 0
	var emptyBottles int = 0
	for true {
		if numBottles > 0 {
			ans += numBottles
			emptyBottles += numBottles
			numBottles = 0
		}
		for emptyBottles >= numExchange {
			numBottles++
			emptyBottles -= numExchange
			numExchange++
		}
		if numBottles == 0 {
			return ans
		}
	}
	return ans
}
