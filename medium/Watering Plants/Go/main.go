// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
func wateringPlants(plants []int, capacity int) int {
	var ans int = 0
	var x int = capacity
	for i := 0; i < len(plants); i++ {
		if plants[i] <= capacity {
			ans++
			capacity -= plants[i]
		} else {
			ans += (2 * (i)) + 1
			capacity = x
			capacity -= plants[i]
		}
	}
	return ans
}
